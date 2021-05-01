import sys, time, os
from logicCore import element, pin
from logicGates import andGate, orGate, xorGate, notGate, nandGate, norGate, xnorGate, truthTable, tristate, bus

commentSequence = '//'
includeSequence = '$include'

# Class to represent commands in .lgc or .ttb source
class command():
    def __init__(self, line, text = "", listing = []):
        self.line = line        # Line number in the source, begins with 1.
        self.text = text        # Original source.
        self.listing = listing  # Listing of the code.
        
    def __repr__(self):
        return "Command '{}' on line {} with listing {}".format(self.text, self.line, self.listing)

# Function to parse source code and return a list of commands.
def parseCommands(lines):
    #print(len(lines))
    commands = []
    for i in range(len(lines)):
        print('Processing line {}'.format(i + 1))
        entries = lines[i].split(commentSequence)[0].split(';')  # Split to remove comments and spaces
        while '' in entries:    # Remove artifacting from
            entries.remove('')
        print("entries: {}".format(entries))
        listing = []
        for e in entries:
            listing.append(e.split(' '))
        for l in listing:
            while '' in l:    # Remove artifacting from spaces
                l.remove('')
        print('listing: {}'.format(listing))
        for l in listing:
            print('l: {}'.format(l))
            if len(l):
                c = command(i + 1, lines[i], l)
                commands.append(c)
                print('c: {}'.format(c))
    return commands

# Function to load a truth table from parsed .lgc source code.
def loadTable(filePath):
    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))
    print('commands:')
    for comm in commands:
        print(comm)
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

# Function to load an element from parsed .ttb source and return that element.
def loadElement(filePath):
    print('=====loading element from {}====='.format(filePath))

    if filePath.split('.')[-1] == 'ttb':    # If the file is a truth table file
        return loadTable(filePath)          # Load it as a truth table
    with open(filePath, 'r') as file:       # Otherwise open the file
        commands = parseCommands(file.read().split('\n'))   # And parse the commands from it
    print('commands:')
    for comm in commands:
        print(comm)
    needsConnected = {}     # Elements and pins needing connected
    registeredElements = {} # Elements registered as subcircuits
    mainElement = element() # The main element
    busses = {}             # Busses in the main element

    for comm in commands:
        print('processing {}'.format(comm))
        if comm.listing[0] == includeSequence:
            registeredElements.update({comm.listing[1]: comm.listing[2]})
        
        elif comm.listing[0] == 'in':
            mainElement.addInput(pin(comm.listing[1]))

        elif comm.listing[0] == 'out':
            newPin = pin(comm.listing[2])
            needsConnected.update({newPin: comm.listing[1]})
            mainElement.addOutput(newPin)

        elif comm.listing[0] == 'and':
            newElement = andGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:-1]})

        elif comm.listing[0] == 'or':
            newElement = orGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            newDict = {newElement: comm.listing[1:-1]}
            needsConnected.update(newDict)

        elif comm.listing[0] == 'xor':
            newElement = xorGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:-1]})

        elif comm.listing[0] == 'not':
            newElement = notGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:-1]})

        elif comm.listing[0] == 'nand':
            newElement = nandGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:-1]})

        elif comm.listing[0] == 'nor':
            newElement = norGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:-1]})

        elif comm.listing[0] == 'xnor':
            newElement = xnorGate()
            newElement.outputs['y'].rename(comm.listing[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:-1]})

        elif comm.listing[0] == 'tristate':
            newElement = tristate()
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.listing[1:]})

        elif comm.listing[0] == 'bus':
            newElement = bus()
            newElement.outputs['y'].rename(comm.listing[1])
            mainElement.addElement(newElement)
            busses.update({comm.listing[1]: newElement})

        elif comm.listing[0] in registeredElements.keys():
            newElement = loadElement(registeredElements[comm.listing[0]])

            # Rename the outputs to the names specified in the .lgc script
            commandOffset = len(newElement.inputs)
            oldNames = list(newElement.outputs.keys())
            for o in oldNames:
                commandOffset += 1
                newElement.outputs[o].rename(comm.listing[commandOffset])
                
            # Add newElement to mainElement
            mainElement.addElement(newElement)
            
            # Add inputs to needsConnected
            pins = []
            for i in range(len(newElement.inputs)):
                pins.append(comm.listing[i + 1])
            needsConnected.update({newElement: pins})

        else:
            raise Exception('Command {} not recognized.'.format(comm.text))

        # needsConnected is a dict of {element: targetNames} or {pin: targetName}
    print(needsConnected)
    for e in needsConnected.keys():
        if isinstance(e, pin):
            targetName = needsConnected[e]
            a = mainElement.internalPins[targetName]
            e.connect(a)
        else:
            print('connecting {}'.format(needsConnected[e]))
            ctr = 0
            for i in e.inputs.keys():
                e.inputs[i].connect(mainElement.internalPins[needsConnected[e][ctr]])
                ctr += 1
            #print(e.inputs['a'].target)
            #print(e.inputs['e'].target)
            if isinstance(e, tristate):
                busses[needsConnected[e][ctr]].addTristate(e)
    return mainElement
