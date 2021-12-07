import sys, time, os, io
from time import sleep, process_time_ns
from argparse import ArgumentParser

# from pynput import keyboard
import simpleANSI as ANSI

from loading.loading import loadElement, setDebug
from ui import vec2, widget, ansiManager, initANSI, cleanupANSI

sys.stdout = io.TextIOWrapper(open(sys.stdout.fileno(), 'wb', 0), write_through=True)
sys.stdout.write('=====test=====')
# Info on pynput: https://pynput.readthedocs.io/en/latest/keyboard.html
# Checking terminal activity status: https://unix.stackexchange.com/a/480138/496091

with open(os.path.join(os.path.dirname(__file__), 'Logical.version.txt'), 'r') as file:
    version = file.read()
pythonVersion = '{}.{}.{}'.format(*sys.version_info[0:3])
architecture = 'x86_64'
platform = sys.platform
if platform == 'win32':
    from ctypes.windll import user32, kernel32
    user32 = ctypes.windll.user32
    kernel32 = ctypes.windll.kernel32
    def checkTerminalActive():
        return user32.GetForegroundWindow() == kernel32.GetConsoleWindow()

elif platform == 'linux':
    # Enable FocusIn/FocusOut mode
    pass

else:
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

class keyTester():
    def __init__(self):
        print('Press any key to see the text for that should be used in Logical code for key bindings. Press Esc to exit.')
    
        keyListener = keyboard.Listener(
                    on_press=self.keyPress,
                    on_release=self.keyRelease
                )
        keyListener.start()
        keyListener.join()

    def keyPress(self, key):
        print(str(key))
        if key == keyboard.Key.esc:
            return False

    def keyRelease(self, key):
        pass

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
        self.breakpointFlag = False
        self.altHeld = False
        self.altKeys = [keyboard.Key.alt,
            keyboard.Key.alt_gr,
            keyboard.Key.alt_l,
            keyboard.Key.alt_r
        ]
        self.keyBindsToExecute = []
        self.verbose = verbose

        setDebug(self.verbose)
        self.mainElement, self.mainWidget = loadElement(filePath)
        if self.verbose:
            input('Press enter to continue...')

        self.titleString = 'Logical {} (Python {} on {} {}): {}'.format(version, pythonVersion, architecture, platform, filePath.replace('\\', '/').split('/')[-1])
        self.initUI()
        self.keyListener = keyboard.Listener(
            on_press=self.keyPress,
            on_release=self.keyRelease
        )
        self.keyListener.start()

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

    def keyPress(self, key):
        if not self.runFlag:
            return False
        if not self.breakpointFlag:
            with keyBoardListenerManager(self):     # Prevent hanging threads
                # If this console is not the active window then return
                if not checkTerminalActive:
                    return
                
                if self.verbose:
                    self.keyListenerDebug.setText(str(key))
                    self.keyListenerDebug.setText(str(key) + ' - ' + str(self.mainElement.keyBinds))

                # Backspace to toggle simulation
                if key == keyboard.Key.backspace:
                    if self.verbose:
                        backspaceString = 'backspace pressed'
                        self.keyListenerDebug.setText(backspaceString + ' ' * (terminalSize[0] - len(backspaceString)))
                    self.simRunFlag = not self.simRunFlag
                    if self.simRunFlag:
                        self.title.setText(self.titleString + '         ')
                    else:
                        self.title.setText(self.titleString + ' (paused)')

                # Escape to exit
                elif key == keyboard.Key.esc:
                    if self.verbose:
                        self.keyListenerDebug.setText('escape pressed                     ')
                    self.mainWidget.update()    # One last update to see if it died right
                    self.runFlag = False
                    return False

                # Insert to break into debugger
                elif key == keyboard.Key.insert:
                    self.breakpointFlag = True

                # Set the appropriate keybinds
                elif str(key) in self.mainElement.keyBinds.keys():
                    if self.verbose:
                        self.keyListenerDebug.setText('{} found in {}'.format(str(key), str(self.mainElement.keyBinds)))
                    for f in self.mainElement.keyBinds[str(key)]:
                        self.keyBindsToExecute.append((f, True))

                else:
                    if self.verbose:
                        self.keyListenerDebug.setText('{} not found in {}'.format(str(key), str(self.mainElement.keyBinds)))

    def keyRelease(self, key):
        if not self.runFlag:
            return False
        if not self.breakpointFlag:
            with keyBoardListenerManager(self):
                # Set the appropriate keybinds
                if str(key) in self.mainElement.keyBinds.keys():
                    for f in self.mainElement.keyBinds[str(key)]:
                        self.keyBindsToExecute.append((f, False))

    def main(self):
        updateTime = 0
        while self.runFlag:
            startTime = process_time_ns()
            self.updateDebug.setText('Update time: {}us   '.format(str(updateTime).rjust(7)))
            
            if self.breakpointFlag:
                breakpoint()
                print(ANSI.clear.entireScreen(), end='')
                self.breakpointFlag = False

            if self.simRunFlag:
                # Execute all the key binding functions set during the last update cycle
                # Prevents contentions from threading
                for f, state in self.keyBindsToExecute:
                    f(state)
                    self.keyBindsToExecute.remove((f, state))

                self.mainElement.preUpdate()    # Fetch pin states before they change
                self.mainElement.update()   # Update each element
            else:
                time.sleep(0.2) # Chillax for a split second, saves the CPU

            self.mainWidget.update()    # Update each widget
            updateTime = int((process_time_ns() - startTime) / 1000)
    
        self.keyListener.join()

    def exit(self):
        self.runFlag = False
            
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
