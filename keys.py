from pynput import keyboard

print('Press any key to see the text for that should be used in Logical code for key bindings. Press Esc to exit.')

def keyPress(key):
    print(str(key))
    if key == keyboard.Key.esc:
        return False

def keyRelease(key):
    pass

keyListener = keyboard.Listener(
            on_press=keyPress,
            on_release=keyRelease
        )
keyListener.start()
keyListener.join()