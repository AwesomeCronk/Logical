import sys, time, os
from loading import loadElement

version = '0.2.0'

if __name__ == '__main__':
    mainElement = loadElement(sys.argv[1])
    input('press enter to continue...')
    runFlag = True
    while runFlag:
        try:
            mainElement.update()
        except Exception as e:
            print(e)
            time.sleep(2)
        os.system('cls')
        termWidth = os.get_terminal_size()[0]
        print('Logical v{}'.format(version))
        print('Inputs '+ ('=' * (termWidth - 7)))
        for i in mainElement.inputs.keys():
            print('{} {}'.format(i, mainElement.inputs[i].value))
        print('Outputs '+ ('=' * (termWidth - 8)))
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
        #breakpoint()
        