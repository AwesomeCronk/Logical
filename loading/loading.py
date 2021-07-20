import os
from logic.core import element, pin
from logic.elements import *
from ui import *
from loading.parsing import parseCommands
import pdb

# Load a truth table from parsed .lgc source code
def loadTable(filePath):
    print('Loading as truth table...')
    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))
    #print('commands:')
    #for comm in commands:
    #    print(comm)
    table = truthTable()
    readingTable = False

    for comm in commands:
        print(comm.info(), end = '\n\n')
        if comm.element == '$pins':
            for i in comm.inputs:
                table.addInput(pin(i))
            for o in comm.outputs:
                table.addOutput(pin(o))
        
        elif comm.element == 'match':
            try:
                for i in comm.inputs:
                    assert int(i) in [0, 1]
                for o in comm.inputs:
                    assert int(o) in [0, 1]
            except:
                raise Exception('Truth table matches must be 0 or 1.')

            if len(comm.inputs) == len(table.inputs) and len(comm.outputs) == len(table.outputs):
                inputs = [int(i) for i in comm.inputs]
                outputs = [int(o) for o in comm.outputs]
                print('Adding match for {} and {}'.format(tuple(inputs), tuple(outputs)))
                table.addMatch(tuple(inputs), tuple(outputs))
            else:
                raise Exception('Truth table matches must have same number of inputs and outputs as $pins declarations')

        else:
            raise Exception('Command {} not recognized.'.format(comm.text))

    print('Truth table loaded.')
    return table, None  # No widget for truth tables

# Load an element from Python source
def loadPyElement(filePath, args = []):
    print('Loading as Python element...')

    globalVars = {
        'element': element,
        'pin': pin,
        'widget': widget,
        'vec2': vec2
    }
    localVars = {}
    with open(filePath, 'r') as file:
        exec(compile(file.read(), filePath, 'exec'), globalVars, localVars)
    
    if 'pyElement' in localVars.keys():
        pyElement = localVars['pyElement']
        pyElement = pyElement(*args)
        try:
            pyWidget = pyElement.widget
        except AttributeError:
            pyWidget = None
    else:
        raise Exception('Python file contained no class named "pyElement".')

    print('Python element loaded.')
    return pyElement, pyWidget

# Load an element from parsed .ttb source and return that element
def loadElement(filePath, cwd = None, args = []):
    # Some shenanigans to get the paths right
    print('Loading element...\nold filePath: {}\nold cwd: {}'.format(filePath, cwd))
    if cwd is None:
        filePath = os.path.abspath(filePath)
    else:
        filePath = os.path.join(cwd, filePath)
    cwd = os.path.split(filePath)[0]
    #print('=====loading element from {}====='.format(filePath))
    print('new filePath: {}\nnew cwd: {}\n'.format(filePath, cwd))

    if filePath.split('.')[-1] == 'ttb':    # Load as truth table if .ttb file
        return loadTable(filePath)
    elif filePath.split('.')[-1] == 'py':   # Load as Python element if .py file
        return loadPyElement(filePath, args = args)

    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))

    # Variables for loading things
    needsConnected = {}
    registeredElements = {} # Sort by name: filepath
    busses = {}
    keyBinds = {}

    # Main element setup
    mainElement = element()

    highPin = pin('\\high')
    mainElement.internalPins.update({highPin.name: highPin})
    mainElement.aliasInternalPins.update({highPin.alias: highPin})
    mainElement.internalPins['\\high'].set(1)

    lowPin = pin('\\low')
    mainElement.internalPins.update({lowPin.name: lowPin})
    mainElement.aliasInternalPins.update({lowPin.alias: lowPin})
    mainElement.internalPins['\\low'].set(0)

    # Main widget setup
    mainWidget = widget()
    mainWidget.setMode(widget.containerMode)

    for comm in commands:
        print(comm.info(), end = '\n\n')
        # Element config
        if comm.element == '$include':
            # Add a note of where to find this element that has been included
            registeredElements.update({comm.outputs[0]: comm.inputs[0].replace('/','\\')})
        
        elif comm.element == '$pins':
            for i in comm.inputs:
                mainElement.addInput(pin(i))
            for o in comm.outputs:
                newPin = pin(o)
                needsConnected.update({newPin: o})
                mainElement.addOutput(newPin)

        # Basic gates
        elif comm.element == 'and':
            newElement = andGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'or':
            newElement = orGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xor':
            newElement = xorGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'not':
            newElement = notGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nand':
            newElement = nandGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nor':
            newElement = norGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xnor':
            newElement = xnorGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        # Bus elements
        elif comm.element == 'tristate':
            newElement = tristate()
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'bus':
            newElement = bus()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            busses.update({comm.inputs[0]: newElement})

        # UI elements
        elif comm.element == 'led':
            newElement = led(*comm.args)
            mainElement.addElement(newElement)
            mainWidget.addWidget(newElement.widget)
            needsConnected.update({newElement: comm.inputs})

        # Control elements
        elif comm.element == 'button':
            newElement = button(*comm.args)
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            mainElement.addKeyBinds(newElement.keyBinds)

        elif comm.element in registeredElements.keys():
            newElement, newWidget = loadElement(registeredElements[comm.element], cwd = cwd, args = comm.args)

            # Rename the outputs to the names specified in the .lgc script
            commandOffset = 0
            oldNames = list(newElement.outputs.keys())
            for o in oldNames:
                newElement.outputs[o].realias(comm.outputs[commandOffset])
                commandOffset += 1
                
            mainElement.addElement(newElement)  # Add newElement to mainElement
            if not newWidget is None:
                mainWidget.addWidget(newWidget)     # Add newWidget to mainWidget
            
            # Add inputs to needsConnected
            if not len(newElement.inputs) == len(comm.inputs):
                raise Exception('Invalid number of inputs: {}'.format(len(comm.inputs)))
            if not len(newElement.outputs) == len(comm.outputs):
                raise Exception('Invalid number of outputs: {}'.format(len(comm.outputs)))
            if not len(newElement.args) == len(comm.args):
                raise Exception('Invalid number of args: {}'.format(len(comm.args)))
            pins = []
            print(newElement.inputs)
            for i in range(len(newElement.inputs)):
                print(i)
                pins.append(comm.inputs[i])
            needsConnected.update({newElement: pins})

            mainElement.addKeyBinds(newElement.keyBinds)

        else:
            raise Exception('Command {} not recognized.'.format(comm.text))

    # needsConnected is a dict of {element: targetNames} or {pin: targetName}
    print('Establishing connections.')
    for e in needsConnected.keys():
        print('connecting {} to {}'.format(e, needsConnected[e]))
        if isinstance(e, pin):
            targetName = needsConnected[e]
            a = mainElement.aliasInternalPins[targetName]
            e.connect(a)
        else:
            ctr = 0
            for i in list(e.inputs.keys()):
                # pdb.set_trace()
                e.inputs[i].connect(mainElement.aliasInternalPins[needsConnected[e][ctr]])
                ctr += 1
            #print(e.inputs['a'].target)
            #print(e.inputs['e'].target)
            if isinstance(e, tristate):
                busses[needsConnected[e][ctr]].addTristate(e)

    print('Element loaded.')
    return mainElement, mainWidget
