import sys, time, os
from pynput import keyboard
from loading import loadElement
from ui import vec2, widget
import simpleANSI as ANSI

# Info on pynput: https://pynput.readthedocs.io/en/latest/keyboard.html

version = '0.2.0'
pythonVersion = '{}.{}.{}'.format(*sys.version_info[0:3])
architecture = 'x86_64'
platform = 'win32'
terminalSize = vec2(*os.get_terminal_size())
runFlag = True

class application():
    def __init__(self):
        self.mainElement = loadElement(sys.argv[1])
        input('press enter to continue...')
        self.initUI()

        # Start the keyboard listener
        keyListener = keyboard.Listener(
            on_press=self.keyPress,
            on_release=self.keyRelease
            )
        keyListener.start()

    def initUI(self):
        # Activate ANSI escapes because conhost ¯\_(ツ)_/¯
        print(ANSI.conhostEnableANSI(), end = '')
        # Clear the screen
        print(ANSI.clear.entireScreen(), end = '')
        # print(ANSI.cursor.home(), end = '') # Maybe not necessary

        self.title = widget(vec2(terminalSize[0],1), vec2(1,1), 0)
        self.title.setText('Logical {} (Python {} on {} {})'.format(version, pythonVersion, architecture, platform))
        self.title.update()

    def keyPress(self, key):
        if key == keyboard.Key.esc:
            global runFlag
            runFlag = False # Stop the main loop        
            return False    # Stop the keyboard listener

    def keyRelease(self, key):
        pass

    def main(self):
        while runFlag:
            try:
                self.mainElement.update()
                runFlag = False
            except Exception as e:
                print(e)
                time.sleep(2)
            