import sys, time, os, ctypes, io
from pynput import keyboard     # MUST USE pynput 1.6.8!!
from time import process_time_ns as getTime
from time import sleep
import simpleANSI as ANSI
from loading.loading import loadElement
from ui import vec2, widget, ansiManager, initANSI, cleanupANSI

sys.stdout = io.TextIOWrapper(open(sys.stdout.fileno(), 'wb', 0), write_through=True)

# Info on pynput: https://pynput.readthedocs.io/en/latest/keyboard.html

with open(os.path.join(os.path.dirname(__file__), 'Logical.version.txt'), 'r') as file:
    version = file.read()
pythonVersion = '{}.{}.{}'.format(*sys.version_info[0:3])
architecture = 'x86_64'
platform = 'win32'
terminalSize = vec2(*os.get_terminal_size())
user32 = ctypes.windll.user32
kernel32 = ctypes.windll.kernel32

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
    def __init__(self):
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

        self.mainElement, self.mainWidget = loadElement(sys.argv[1])
        input('press enter to continue...')

        self.titleString = 'Logical {} (Python {} on {} {})'.format(version, pythonVersion, architecture, platform)
        self.initUI()
        self.keyListener = keyboard.Listener(
            on_press=self.keyPress,
            on_release=self.keyRelease
        )
        self.keyListener.start()

    def initUI(self):
        # Already done in ui.ansiManager
        # # Activate ANSI escapes because conhost ¯\_(ツ)_/¯
        # print(ANSI.conhostEnableANSI(), end = '')
        # Clear the screen. Must be done after all the debug printing in loadElement
        print(ANSI.clear.entireScreen(), end = '')

        self.title = widget()
        self.title.resize(vec2(terminalSize[0], 1))
        self.title.moveTo(vec2(0, 0))
        self.title.setText(self.titleString)
        self.mainWidget.addWidget(self.title)

        self.keyListenerDebug = widget()
        self.keyListenerDebug.resize(vec2(terminalSize[0], 1))
        self.keyListenerDebug.moveTo(vec2(0, 2))
        self.mainWidget.addWidget(self.keyListenerDebug)

        self.updateDebug = widget()
        self.updateDebug.resize(vec2(terminalSize[0], 1))
        self.updateDebug.moveTo(vec2(0, terminalSize[1] - 1))
        self.mainWidget.addWidget(self.updateDebug)

    def keyPress(self, key):
        if not self.breakpointFlag:
            with keyBoardListenerManager(self):     # Prevent hanging threads
                # If this console is not the active window then return
                if user32.GetForegroundWindow() != kernel32.GetConsoleWindow():
                    return
                
                self.keyListenerDebug.setText(str(key))
                self.keyListenerDebug.setText(str(key) + ' - ' + str(self.mainElement.keyBinds))

                # Backspace to toggle simulation
                if key == keyboard.Key.backspace:
                    self.keyListenerDebug.setText('backspace pressed                  ')
                    self.simRunFlag = not self.simRunFlag
                    if self.simRunFlag:
                        self.title.setText(self.titleString + '         ')
                    else:
                        self.title.setText(self.titleString + ' (paused)')

                # Escape to exit
                elif key == keyboard.Key.esc:
                    self.keyListenerDebug.setText('escape pressed                     ')
                    self.mainWidget.update()    # One last update to see if it died right
                    self.runFlag = False
                    return False

                # Insert to break into debugger
                elif key == keyboard.Key.insert:
                    self.breakpointFlag = True

                # Set the appropriate keybinds
                elif str(key) in self.mainElement.keyBinds.keys():
                    self.keyListenerDebug.setText('{} found in {}'.format(str(key), str(self.mainElement.keyBinds)))
                    for f in self.mainElement.keyBinds[str(key)]:
                        self.keyBindsToExecute.append((f, True))

                else:
                    self.keyListenerDebug.setText('{} not found in {}'.format(str(key), str(self.mainElement.keyBinds)))

    def keyRelease(self, key):
        if not self.breakpointFlag:
            with keyBoardListenerManager(self):
                # Set the appropriate keybinds
                if str(key) in self.mainElement.keyBinds.keys():
                    for f in self.mainElement.keyBinds[str(key)]:
                        self.keyBindsToExecute.append((f, False))

    def main(self):
        updateTime = 0
        while self.runFlag:
            startTime = getTime()
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
            # Need to either flush or replace sys.stdout
            # print('', end='', flush=True)   # Flush stdout each update loop to ensure that updates get printed.
            
            updateTime = int((getTime() - startTime) / 1000)
        
        self.keyListener.join()

    def exit(self):
        self.runFlag = False
            
if __name__ == '__main__':
    # try:
    #     initANSI()
    #     sim = simulation()
    #     sim.main()
    # finally:
    #     cleanupANSI()

    with ansiManager():
        sim = simulation()
        sim.main()
