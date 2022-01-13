# Builtins
import sys, time, os, io
from time import process_time_ns
from argparse import ArgumentParser
import logging

# Packages
import simpleANSI as ANSI

# Project
from loading.loading import loadElement
from ui import vec2, widget, ansiManager
from keys import createKeyEvent, pollKeyEvents, rawTest, setKeyMap


# System info
with open(os.path.join(os.path.dirname(__file__), 'Logical.version.txt'), 'r') as file:
    version = file.read()
pythonVersion = '{}.{}.{}'.format(*sys.version_info[0:3])
architecture = 'x86_64'
platform = sys.platform
terminalSize = vec2(*os.get_terminal_size())
sys.stdout = io.TextIOWrapper(open(sys.stdout.fileno(), 'wb', 0), write_through=True)
logPath = {'linux': os.path.expanduser('~/.local/share/Logical/Logical.log'), 'win32': os.path.expandvars('%USERPROFILE%\\AppData\Roaming\Logical\Logical.log')}[platform]

if not platform in ('linux', 'win32'):
    raise RuntimeError('Platform "{}" not supported'.format(platform))


# Command line args
def getArgs():
    parser = ArgumentParser()
    parser.add_argument(
        'file',
        nargs='?',
        default='None',
        help='file to be run'
    )
    # parser.add_argument(
    #     '-v',
    #     help='verbose mode',
    #     action='store_true'
    # )
    parser.add_argument(
        '-k',
        help='keys mode',
        action='store_true'
    )

    return parser, parser.parse_args()

# Main simulation class
class simulation():
    def __init__(self, filePath):
        self.runFlag = True
        self.simRunFlag = True
        # self.breakpointFlag = False     # Reserved for breakpoint() feature
        self.keyEvents = {}
        self.eventsToCall = []
        self.titleString = 'Logical {} (Python {} on {} {}): {}'.format(version, pythonVersion, platform, architecture, filePath.replace('\\', '/').split('/')[-1])

        # setDebug(self.verbose)
        # setKeyDebug(self.verbose)
        self.log = logging.getLogger('simulation')

        self.mainElement, self.mainWidget = loadElement(filePath)

        self.initKeyBinds()
        self.initUI()
        
    def initKeyBinds(self):
        setKeyMap(platform)
        createKeyEvent('Backspace', self.togglePaused, self)
        createKeyEvent('Escape', self.exit, self)
        createKeyEvent('Ctrl+C', self.exit, self)

        # Load element key binds
        for key in self.mainElement.keyBinds.keys():
            for function in self.mainElement.keyBinds[key]:
                # delay = self.mainElement.keyBinds[key][-1]
                createKeyEvent(key, function, self)

    def initUI(self):
        print(ANSI.clear.entireScreen(), end = '')

        self.mainWidget.moveTo(vec2(0, 2))

        self.title = widget()
        self.title.resize(vec2(terminalSize[0], 1))
        self.title.moveTo(vec2(0, -2))
        self.title.setText(self.titleString)
        self.mainWidget.addWidget(self.title)

        self.updateDebug = widget()
        self.updateDebug.resize(vec2(terminalSize[0], 1))
        self.updateDebug.moveTo(vec2(0, terminalSize[1] - 3))
        self.mainWidget.addWidget(self.updateDebug)

    def togglePaused(self, state):
        # Check the state here because we don't want the key release to toggle the pause
        if state:
            self.simRunFlag = not self.simRunFlag
            if self.simRunFlag:
                self.title.setText(self.titleString + '         ')
            else:
                self.title.setText(self.titleString + ' (paused)')
    
    def exit(self, state):
        # Here we don't care about state since it's a one-time gig
        self.mainWidget.update()    # One last update to see if it died right
        self.runFlag = False

    def main(self):
        with pollKeyEvents(self):
            updateTime = 0
            while self.runFlag:
                # sys.stdout.write('loop')
                startTime = process_time_ns()
                self.updateDebug.setText('Update time: {}us   '.format(str(updateTime).rjust(7)))
                
                # May re-implement if I find a use for it
                # Insert creates a sequence of keys and breakpoint() is useless in the compiled version
                # if self.breakpointFlag:
                #     breakpoint()
                #     print(ANSI.clear.entireScreen(), end='')
                #     self.breakpointFlag = False

                # Uncall & call all necessary key events
                for currentEvents in self.keyEvents.values():
                    for currentEvent in currentEvents:
                        currentEvent.unCall()   # This is uncalled for...
                for func, state in self.eventsToCall:
                    func(state)
                    del(self.eventsToCall[0])

                if self.simRunFlag:
                    self.mainElement.preUpdate()    # Fetch pin states before they change
                    self.mainElement.update()   # Update each element
                else:
                    time.sleep(0.2) # Chillax for a split second, saves the CPU

                self.mainWidget.update()    # Update each widget
                updateTime = int((process_time_ns() - startTime) / 1000)
            print(ANSI.clear.entireScreen(), end = '')
            print(ANSI.cursor.moveTo(1, 1))
            print('If Logical does not exit, please press a key to cycle stdin listener.')
            
if __name__ == '__main__':
    parser, args = getArgs()
    
    # Ensure the log directory exists
    if not os.path.exists(os.path.dirname(logPath)):
        os.makedirs(os.path.dirname(logPath))
    # Initialize logging to logPath
    logging.basicConfig(filename=logPath, filemode='w', encoding='utf-8', level=logging.DEBUG)
    
    if args.k:
        rawTest()   # Print out key values and timings
    else:
        if args.file == 'None':
            parser.error('file is required unless -k is set.')
        else:
            with ansiManager():
                sim = simulation(args.file)
                sim.main()
