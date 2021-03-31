from logicCore import *
from logicGates import *
import sys, time, os

commentSequence = '//'
includeSequence = '$include'

def parseCommands(lines):
    commands = []
    for r in lines:
        c = r.lower().split(commentSequence)[0].split(' ')  #Split at the # to remove comments
        while '' in c:
            c.remove('')
        
        if not c == []:
            commands.append(c)
    return commands

def loadTable(filePath):
    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))
    table = truthTable()
    readingTable = False

    for command in commands:
        if command[0] == 'in':
            table.addInput(pin(command[1]))
            
        elif command[0] == 'out':
            table.addOutput(pin(command[1]))

        elif command[0] == 'begintable':
            readingTable = True

        elif command[0] == 'endtable':
            readingTable = False

        else:
            if readingTable:
                match = command[0:len(table.inputs)]
                for m in range(len(match)):
                    match[m] = int(match[m])
                match = tuple(match)
                result = command[len(table.inputs):]
                for r in range(len(result)):
                    result[r] = int(result[r])
                result = tuple(result)
                table.append(match, result)
            else:
                raise Exception('command {} not recognized'.format(command[0]))
    return table

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
            registeredElements.update({command[1]: command[2]})
        
        elif command[0] == 'in':
            mainElement.addInput(pin(command[1]))

        elif command[0] == 'out':
            newPin = pin(command[2])
            needsConnected.update({newPin: command[1]})
            mainElement.addOutput(newPin)

        elif command[0] == 'and':
            newElement = andGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        elif command[0] == 'or':
            newElement = orGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            newDict = {newElement: command[1:-1]}
            needsConnected.update(newDict)

        elif command[0] == 'xor':
            newElement = xorGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        elif command[0] == 'not':
            newElement = notGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        elif command[0] == 'nand':
            newElement = nandGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        elif command[0] == 'nor':
            newElement = norGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        elif command[0] == 'xnor':
            newElement = xnorGate()
            newElement.outputs['y'].rename(command[-1])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: command[1:-1]})

        #elif command[0] == 'bus':

        #elif command[0] == 'tristate':

        elif command[0] in registeredElements.keys():
            newElement = loadElement(registeredElements[command[0]])
            
            #Rename the outputs to the names specified in the .lgc script
            commandOffset = len(newElement.inputs)
            oldNames = list(newElement.outputs.keys())
            for o in oldNames:
                commandOffset += 1
                newElement.outputs[o].rename(command[commandOffset])
                
            #Add newElement to mainElement
            mainElement.addElement(newElement)
            
            #Add inputs to needsConnected
            pins = []
            for i in range(len(newElement.inputs)):
                pins.append(command[i + 1])
            needsConnected.update({newElement: pins})
            
            #for i in range(len(newElement.inputs)):
            #    newDict = {list(newElement.inputs.values())[i]: command[i+1]}
            #    needsConnected.update(newDict)

        else:
            raise Exception('Command {} not recognized.'.format(command[0]))

        for e in needsConnected.keys():
            if type(e) is pin:
                targetName = needsConnected[e]
                a = mainElement.internalPins[targetName]
                e.connect(a)
            else:
                ctr = 0
                for i in e.inputs.keys():
                    e.inputs[i].connect(mainElement.internalPins[needsConnected[e][ctr]])
                    ctr += 1
    return mainElement

if __name__ == '__main__':
    mainElement = loadElement(sys.argv[1])
    runFlag = True
    while(runFlag):
        mainElement.update()
        os.system('cls')
        print('Inputs ====================')
        for i in mainElement.inputs.keys():
            print('{} {}'.format(i, mainElement.inputs[i].value))
        print('Outputs ===================')
        for o in mainElement.outputs.keys():
            print('{} {}'.format(o, mainElement.outputs[o].value))
        runCommand = input('\nLogical> ').split(' ')
        
        if runCommand[0] == 'q':
            runFlag = False
        elif runCommand[0] == 'u':
            pass
        elif runCommand[0] == 't':
            try:
                mainElement.inputs[runCommand[1]].toggle()
            except KeyError:
                print('input {} not recognized'.format(runCommand[1]))
                time.sleep(1)
        else:
            print('command {} not recognized'.format(runCommand[0]))
            time.sleep(1)