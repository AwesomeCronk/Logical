import sys, time, os, ctypes
from pynput import keyboard
from loading.loading import loadElement
from ui import vec2, widget, ansiManager
import simpleANSI as ANSI
import pdb

# Info on pynput: https://pynput.readthedocs.io/en/latest/keyboard.html

version = '0.3.1'
pythonVersion = '{}.{}.{}'.format(*sys.version_info[0:3])
architecture = 'x86_64'
platform = 'win32'
terminalSize = vec2(*os.get_terminal_size())
user32 = ctypes.windll.user32
kernel32 = ctypes.windll.kernel32

class simulation():
    def __init__(self):
        self.keyBinds = {}  # Dict of functions, called with True when pressed
                            # and False when released
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
        self.keyListenerDebug.setText('debug point for keyboard listener')
        self.mainWidget.addWidget(self.keyListenerDebug)

    def keyPress(self, key):
        # If this console is not the active window then return
        if user32.GetForegroundWindow() != kernel32.GetConsoleWindow():
            return
        
        # self.keyListenerDebug.setText(str(key))
        self.keyListenerDebug.setText(str(self.keyBinds.keys()))

        # Backspace to toggle simulation
        if key == keyboard.Key.backspace:
            self.simRunFlag = not self.simRunFlag
            # print(self.simRunFlag)

        # Escape to exit
        elif key == keyboard.Key.esc:
            self.runFlag = False
            return False

        # Set the appropriate keybinds
        elif str(key) in self.keyBinds.keys():
            for f in self.keyBinds[key]:
                f(True)

    def keyRelease(self, key):
        # Set the appropriate keybinds
        if str(key) in self.keyBinds.keys():
            for f in self.keyBinds[key]:
                f(False)

    def hotKeyExit(self):
        self.exit()

    def main(self):
        while self.runFlag:
            if self.simRunFlag:
                self.mainElement.update()
                self.mainWidget.update()
            else:
                time.sleep(0.1) # Chillax for a split second, saves the CPU
        
        self.keyListener.join()

    def exit(self):
        self.runFlag = False
            
if __name__ == '__main__':
    with ansiManager():
        sim = simulation()
        sim.main()
