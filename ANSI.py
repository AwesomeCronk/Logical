# Transliterated from https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

import ctypes # Used to enable VT-100 mode on windows conhost

def conhostEnableANSI():
    kernel32 = ctypes.windll.kernel32
    kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), 7)
    
# Cursor Controls:
def cursorHome():
    return '\x1b[H'

def cursorMoveTo(line, column):
    return '\x1b[{};{}H'.format(line,column)

def cursorMoveUpBy(lines):
    return '\x1b[{}A'.format(lines)

def cursorMoveDownBy(lines):
    return '\x1b[{}B'.format(lines)

def cursorMoveRightBy(columns):
    return '\x1b[{}C'.format(columns)

def cursorMoveLeftBy(columns):
    return '\x1b[{}D'.format(columns)

def cursorMoveBegNext(lines):
    return '\x1b[{}E'.format(lines)

def cursorMoveBegPrev(lines):
    return '\x1b[{}F'.format(lines)

def cursorMoveToCol(column):
    return '\x1b[{}G'.format(column)

def cursorSavePos():
    return '\x1b[s'

def cursorRestorePos():
    return '\x1b[u'

# Clear Controls:
def clearScreen():
    return '\x1b[J'

def clearScreenToEnd():
    return '\x1b[0J'

def clearScreenToBeg():
    return '\x1b[1J'

def clearEntireScreen():
    return '\x1b[2J'

def clearLine():
    return '\x1b[K'

def clearLineToEnd():
    return '\x1b[0K'

def clearLineToBeg():
    return '\x1b[1K'

def clearEntireLine():
    return '\x1b[2K'

# Graphics Controls:
