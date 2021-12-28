import sys, time, os, io
from time import sleep, process_time_ns
from argparse import ArgumentParser

# from pynput import keyboard
import simpleANSI as ANSI

from loading.loading import loadElement, setDebug
from ui import vec2, widget, ansiManager, initANSI, cleanupANSI
from keys import createKeyEvent, pollKeyEvents

sys.stdout = io.TextIOWrapper(open(sys.stdout.fileno(), 'wb', 0), write_through=True)
# sys.stdout.write('=====test=====')  # It works... move on!

with open(os.path.join(os.path.dirname(__file__), 'Logical.version.txt'), 'r') as file:
    version = file.read()
pythonVersion = '{}.{}.{}'.format(*sys.version_info[0:3])
architecture = 'x86_64'
platform = sys.platform

if not platform in ('linux', 'win32'):
    raise RuntimeError('Platform "{}" not supported'.format(platform))

terminalSize = vec2(*os.get_terminal_size())

def getArgs():
    parser = ArgumentParser()
    parser.add_argument(
        'file',
        nargs='?',
        default='None',
        help='file to be run'
    )
    parser.add_argument(
        '-v',
        help='verbose mode',
        action='store_true'
    )
    parser.add_argument(
        '-k',
        help='keys mode',
        action='store_true'
    )

    return parser, parser.parse_args()

class keyBoardListenerManager():
    def __init__(self, simulation):
        self.simulation = simulation

    def __enter__(self):
        pass

    def __exit__(self, *args):
        # Take action only if there was an exception
        if not args[0] is None:
            # Stop the main thread if the keyboard thread crashes
            self.simulation.simRunFlag = False
            self.simulation.runFlag = False

class simulation():
    def __init__(self, filePath, verbose):
        self.runFlag = True
        self.simRunFlag = True
        # self.breakpointFlag = False     # Reserved for breakpoint() feature
        self.keyEvents = {}
        self.eventsToCall = []
        self.verbose = verbose

        setDebug(self.verbose)
        self.mainElement, self.mainWidget = loadElement(filePath)
        if self.verbose:
            input('Press enter to continue...')

        self.titleString = 'Logical {} (Python {} on {} {}): {}'.format(version, pythonVersion, platform, architecture, filePath.replace('\\', '/').split('/')[-1])
        self.initUI()
        
        createKeyEvent('\\x7f', self.togglePaused, self)    # Backspace
        createKeyEvent('\\x1b', self.exit, self)    # Esc
        createKeyEvent('\\x03', self.exit, self)    # Ctrl+C

    def initUI(self):
        print(ANSI.clear.entireScreen(), end = '')

        self.mainWidget.moveTo(vec2(0, 2))

        self.title = widget()
        self.title.resize(vec2(terminalSize[0], 1))
        self.title.moveTo(vec2(0, -2))
        self.title.setText(self.titleString)
        self.mainWidget.addWidget(self.title)

        if self.verbose:
            self.keyListenerDebug = widget()
            self.keyListenerDebug.resize(vec2(terminalSize[0], 1))
            self.keyListenerDebug.moveTo(vec2(0, -1))
            self.mainWidget.addWidget(self.keyListenerDebug)

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
            print('context manager')
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
                for currentEvent in self.keyEvents.values():
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
            
if __name__ == '__main__':
    parser, args = getArgs()
    # print(args.file, args.k, args.v)
    if args.k:
        keyTester()
    else:
        if args.file == 'None':
            parser.error('file is required unless -k is set.')
        else:
            with ansiManager(args.v):
                sim = simulation(args.file, args.v)
                sim.main()
