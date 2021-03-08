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
    print(commands)

if __name__ == '__main__':
    loadElement(sys.argv[1])