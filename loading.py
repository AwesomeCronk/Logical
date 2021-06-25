import os
from logicCore import element, pin
from logicElements import *
from parsing import parseCommands

# Function to load a truth table from parsed .lgc source code.
def loadTable(filePath):
    raise NotImplementedError('Truth table are not yet implemented for the updated version of Logical.')
    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))
    #print('commands:')
    #for comm in commands:
    #    print(comm)
    table = truthTable()
    readingTable = False

    for comm in commands:
        if comm.listing[0] == 'in':
            table.addInput(pin(comm.listing[1]))
            
        elif comm.listing[0] == 'out':
            table.addOutput(pin(comm.listing[1]))

        elif comm.listing[0] == 'beginTable':
            readingTable = True

        elif comm.listing[0] == 'endTable':
            readingTable = False

        else:
            if readingTable:
                match = comm.listing[0:len(table.inputs)]
                for m in range(len(match)):
                    match[m] = int(match[m])
                match = tuple(match)
                result = comm.listing[len(table.inputs):]
                for r in range(len(result)):
                    result[r] = int(result[r])
                result = tuple(result)
                table.append(match, result)
            else:
                raise Exception('Command {} not recognized'.format(comm.text))
    return table

# Function to load an element from parsed .ttb source and return that element. cwd is used internally.
def loadElement(filePath, cwd = None):
    # Some shenanigans to get the paths right
    print('New Element\nold filePath: {}\nold cwd: {}'.format(filePath, cwd))
    if cwd is None:
        filePath = os.path.abspath(filePath)
    else:
        filePath = os.path.join(cwd, filePath)
    cwd = os.path.split(filePath)[0]
    #print('=====loading element from {}====='.format(filePath))
    print('new filePath: {}\nnew cwd: {}\n'.format(filePath, cwd))

    if filePath.split('.')[-1] == 'ttb':    # If the file is a truth table file
        return loadTable(filePath)          # Load it as a truth table
    with open(filePath, 'r') as file:       # Otherwise open the file
        commands = parseCommands(file.read().split('\n'))   # And parse the commands from it
    #print('commands:')
    #for comm in commands:
    #    print(comm)
    needsConnected = {}     # Elements and pins needing connected
    registeredElements = {} # Elements registered as subcircuits
    mainElement = element() # The main element
    busses = {}             # Busses in the main element

    for comm in commands:
        #print('processing {}'.format(comm))
        if comm.element == '$include':
            # Add a note of where to find this element that has been included
            registeredElements.update({comm.outputs[0]: comm.inputs[0].replace('/','\\')})
        
        elif comm.element == 'in':
            mainElement.addInput(pin(comm.listing[1]))

        elif comm.element == 'out':
            newPin = pin(comm.listing[2])
            needsConnected.update({newPin: comm.listing[1]})
            mainElement.addOutput(newPin)

        elif comm.element == 'and':
            newElement = andGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'or':
            newElement = orGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xor':
            newElement = xorGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'not':
            newElement = notGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nand':
            newElement = nandGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nor':
            newElement = norGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xnor':
            newElement = xnorGate()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'tristate':
            newElement = tristate()
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'bus':
            newElement = bus()
            newElement.outputs['y'].rename(comm.outputs[0])
            mainElement.addElement(newElement)
            busses.update({comm.inputs[0]: newElement})

        elif comm.element in registeredElements.keys():
            newElement = loadElement(registeredElements[comm.element], cwd = cwd)

            # Rename the outputs to the names specified in the .lgc script
            commandOffset = 0
            oldNames = list(newElement.outputs.keys())
            for o in oldNames:
                newElement.outputs[o].rename(comm.outputs[commandOffset])
                commandOffset += 1
                
            # Add newElement to mainElement
            mainElement.addElement(newElement)
            
            # Add inputs to needsConnected
            pins = []
            for i in range(len(newElement.inputs)):
                pins.append(comm.inputs[i])
            needsConnected.update({newElement: pins})

        else:
            raise Exception('Command {} not recognized.'.format(comm.text))

        # needsConnected is a dict of {element: targetNames} or {pin: targetName}
    #print(needsConnected)
    for e in needsConnected.keys():
        if isinstance(e, pin):
            targetName = needsConnected[e]
            a = mainElement.internalPins[targetName]
            e.connect(a)
        else:
            #print('connecting {}'.format(needsConnected[e]))
            ctr = 0
            for i in e.inputs.keys():
                e.inputs[i].connect(mainElement.internalPins[needsConnected[e][ctr]])
                ctr += 1
            #print(e.inputs['a'].target)
            #print(e.inputs['e'].target)
            if isinstance(e, tristate):
                busses[needsConnected[e][ctr]].addTristate(e)
    return mainElement
