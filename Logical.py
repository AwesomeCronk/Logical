import sys, time, os, ctypes
from pynput import keyboard     # MUST USE pynput 1.6.8!!
from loading.loading import loadElement
from ui import vec2, widget, ansiManager
import simpleANSI as ANSI
import pdb

# Info on pynput: https://pynput.readthedocs.io/en/latest/keyboard.html

version = '0.3.4'
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
            self.simulation.simRunFlag = False
            self.simulation.runFlag = False

class simulation():
    def __init__(self):
        self.runFlag = True
        self.simRunFlag = True
        self.altHeld = False
        self.altKeys = [keyboard.Key.alt,
            keyboard.Key.alt_gr,
            keyboard.Key.alt_l,
            keyboard.Key.alt_r
        ]

        self.mainElement, self.mainWidget = loadElement(sys.argv[1])
        input('press enter to continue...')
        self.initUI()
        # pdb.set_trace()

        # Start the keyboard listener
        # self.exitHotKey = keyboard.HotKey(
        #     keyboard.HotKey.parse('<alt>+<esc>'),
        #     self.exit
        # )
        
        self.keyListener = keyboard.Listener(
            on_press=self.keyPress,
            on_release=self.keyRelease
        )
        self.keyListener.start()

    def initUI(self):
        # Activate ANSI escapes because conhost ¯\_(ツ)_/¯
        print(ANSI.conhostEnableANSI(), end = '')
        # Clear the screen
        print(ANSI.clear.entireScreen(), end = '')

        self.title = widget()
        self.title.resize(vec2(terminalSize[0], 1))
        self.title.moveTo(vec2(0, 0))
        self.title.setText('Logical {} (Python {} on {} {})'.format(version, pythonVersion, architecture, platform))
        self.mainWidget.addWidget(self.title)

        self.keyListenerDebug = widget()
        self.keyListenerDebug.resize(vec2(terminalSize[0], 1))
        self.keyListenerDebug.moveTo(vec2(0, 2))
        self.mainWidget.addWidget(self.keyListenerDebug)

    def keyPress(self, key):
        with keyBoardListenerManager(self):     # Prevent hanging threads
            # If this console is not the active window then return
            if user32.GetForegroundWindow() != kernel32.GetConsoleWindow():
                return
            
            # self.keyListenerDebug.setText(str(key))
            self.keyListenerDebug.setText(str(key) + ' - ' + str(self.mainElement.keyBinds))

            # Backspace to toggle simulation
            if key == keyboard.Key.backspace:
                self.keyListenerDebug.setText('backspace pressed                  ')
                self.simRunFlag = not self.simRunFlag
                # print(self.simRunFlag)

            # Escape to exit
            elif key == keyboard.Key.esc:
                self.keyListenerDebug.setText('escape pressed                     ')
                self.mainWidget.update()    # One last update to see if it died right
                self.runFlag = False
                return False

            # Set the appropriate keybinds
            elif str(key) in self.mainElement.keyBinds.keys():
                self.keyListenerDebug.setText('{} found in {}'.format(str(key), str(self.mainElement.keyBinds)))
                for f in self.mainElement.keyBinds[str(key)]:
                    f(True)

            else:
                self.keyListenerDebug.setText('{} not found in {}'.format(repr(key), repr(self.mainElement.keyBinds)))

    def keyRelease(self, key):
        with keyBoardListenerManager(self):
            # Set the appropriate keybinds
            if str(key) in self.mainElement.keyBinds.keys():
                for f in self.mainElement.keyBinds[str(key)]:
                    f(False)

    def hotKeyExit(self):
        self.exit()

    def main(self):
        while self.runFlag:
            if self.simRunFlag:
                self.mainElement.update()
                self.mainWidget.update()
            else:
                self.mainWidget.update()
                time.sleep(0.1) # Chillax for a split second, saves the CPU
        
        self.keyListener.join()

    def exit(self):
        self.runFlag = False
            
if __name__ == '__main__':
    with ansiManager():
        sim = simulation()
        sim.main()
