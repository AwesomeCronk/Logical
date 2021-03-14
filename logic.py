from logicCore import *
from logicGates import *
import sys

commentSequence = '//'
includeSequence = ''

def parseCommands(lines):
    commands = []
    for r in lines:
        c = r.split(commentSequence)[0].split(' ')  #Split at the # to remove comments
        while '' in c:
            c.remove('')
        
        if not c == []:
            commands.append(c)
    return commands

def loadTable(filePath):
    print('Truth tables are not yet implemented.')

def loadElement(filePath):
    print('=====loading element from {}====='.format(filePath))

    if filePath.split('.')[-1] == 'ttb':    #If the file is a truth table file
        return loadTable(filePath)          #Load it as a truth table
    with open(filePath, 'r') as file:       #Otherwise open the file
        commands = parseCommands(file.read().split('\n'))   #And parse the commands from it
    
    needsConnected = {}
    registeredElements = {}
    mainElement = element()

    for command in commands:
        if command[0] == includeSequence:
            reregisteredElements.update({command[1]: command[2]})
        elif command[0] == 'in':
            mainElement.addInput(pin(command[1]))
        elif command[0] == 'out':
            newPin = pin(command[2])
            needsConnected.update({newPin: command[1]})
            mainElement.addOutput(newPin)
        elif command[0] == 'and':
            newElement = andGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})
        elif command[0] == 'or':
            newElement = orGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})
        elif command[0] == 'xor':
            newElement = xorGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})
        elif command[0] == 'not':
            newElement = notGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})
        elif command[0] == 'nand':
            newElement = nandGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})
        elif command[0] == 'nor':
            newElement = norGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})
        elif command[0] == 'xnor':
            newElement = xnorGate(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        else:
            raise Exception('Command {} not recognized.'.format(command[0]))

if __name__ == '__main__':
    loadElement(sys.argv[1])