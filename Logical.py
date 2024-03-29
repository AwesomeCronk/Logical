# Builtins
import sys, time, os, io, traceback, logging
from time import process_time_ns
from argparse import ArgumentParser

# Packages
import simpleANSI as ANSI

# Project
from loading.loading import loadElement
from loading.parsing import parseTest
from ui import vec2, widget, ansiManager
from keys import createKeyEvent, pollKeyEvents, rawTest, setKeyMap
from errors import SimulateError, throw, setThrowEvent


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
        help='key test mode',
        action='store_true'
    )
    parser.add_argument(
        '-p',
        help='parse test mode',
        action='store_true'
    )

    return parser, parser.parse_args()

# Main simulation class
class simulation():
    def __init__(self, filePath):
        self.runFlag = True
        self.simRunFlag = True
        self.stopMessage = ''
        # self.breakpointFlag = False     # Reserved for breakpoint() feature
        self.keyEvents = {}
        self.eventsToCall = []
        self.titleString = 'Logical {} (Python {} on {} {}): {}'.format(version, pythonVersion, platform, architecture, filePath.replace('\\', '/').split('/')[-1])

        self.log = logging.getLogger('simulation')

        self.mainElement, self.mainWidget = loadElement(filePath)

        self.initKeyBinds()
        self.initUI()

        setThrowEvent(self.throwEvent)
        
    def initKeyBinds(self):
        setKeyMap(platform)
        createKeyEvent('Backspace', self.togglePaused, 0.0, self)
        createKeyEvent('Escape', self.stop, 0.0, self)
        createKeyEvent('Ctrl+C', self.stop, 0.0, self)

        # Load element key binds
        for key in self.mainElement.keyBinds.keys():
            for function in self.mainElement.keyBinds[key]:
                # delay = self.mainElement.keyBinds[key][-1]
                createKeyEvent(key, function, 0.3, self)

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

    def throwEvent(self, errorToThrow):
        self.stop(errorToThrow)
        self.log.error(errorToThrow)

    def stop(self, message='', state=0):
        # Here we don't care about state since it's a one-time gig
        self.mainWidget.update()    # One last update to see if it died right
        self.runFlag = False
        self.stopMessage = message

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
                    # self.log.debug('Updating elements...')
                    try:
                        self.mainElement.preUpdate()    # Fetch pin states so they don't change mid-update
                    except:
                        throw(SimulateError('element preUpdate failure:\n{}'.format(traceback.format_exc()), self.mainElement.id))
                    try:
                        self.mainElement.update()   # Update each element
                    except:
                        throw(SimulateError('element update failure:\n{}'.format(traceback.format_exc()), self.mainElement.id))
                else:
                    time.sleep(0.2)     # Chillax for a split second, saves the CPU

                # time.sleep(0.4)     # Delay to reduce log spam for debugging (comment out when done)

                # self.log.debug('Updating widgets...')
                self.mainWidget.update()    # Update each widget
                updateTime = int((process_time_ns() - startTime) / 1000)
            print(ANSI.clear.entireScreen(), end = '')
            print(ANSI.cursor.moveTo(1, 1))
            print(self.stopMessage)
            print('If Logical does not exit, please press a key to cycle stdin listener.')
            
if __name__ == '__main__':
    argParser, args = getArgs()
    
    # Ensure the log directory exists
    if not os.path.exists(os.path.dirname(logPath)):
        os.makedirs(os.path.dirname(logPath))
    # Initialize logging to logPath
    logging.basicConfig(filename=logPath, filemode='w', encoding='utf-8', level=logging.DEBUG)
    
    if args.k:
        setKeyMap(platform)
        rawTest()   # Print out key values and timings
    elif args.p:
        parseTest(args.file)
    else:
        if args.file == 'None':
            argParser.error('file is required unless -k is set.')
        else:
            with ansiManager():
                sim = simulation(args.file)
                sim.main()
