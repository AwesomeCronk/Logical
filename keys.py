# https://newbedev.com/how-to-key-press-detection-on-a-linux-terminal-low-level-style-in-python
import sys
import tty
import termios

def getCharLinux():
    try:
        fd = sys.stdin.fileno()
        attr = termios.tcgetattr(fd)
        tty.setraw(fd)
        return sys.stdin.read(1)
    finally:
        termios.tcsetattr(fd, termios.TCSANOW, attr)

def getCharWindows():
    pass


# 01 - 1a are Ctrl+A - Ctrl+Z
Esc = '\x1b'
Bks = '\x7f'

Ins = Esc, '[', '2', '~'
Del = Esc, '[', '3', '~'
ArrUp = Esc, '[', 'A'
ArrDn = Esc, '[', 'B'
ArrRt = Esc, '[', 'C'
ArrLt = Esc, '[', 'D'
# = Esc, '[', 'E'
Home = Esc, '[', 'H'
End = Esc, '[', 'F'
PgUp = Esc, '[', '5', '~'
PgDn = Esc, '[', '6', '~'

while True:
    c = getCharLinux()
    print(repr(c), end=' ')
    if c == '\x03':
        print('Ctrl+C')
        break
    else:
        print('')
