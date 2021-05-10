# Resources:
# https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
# https://bluesock.org/~willkg/dev/ansi.html

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
class graphicsModes:
    normal = 0
    bold = 1
    underline = 4
    blink = 5
    invert = 7
    invisible = 8
    
    fgBlack = 30
    fgRed = 31
    fgGreen = 32
    fgYellow = 33
    fgBlue = 34
    fgMagenta = 35
    fgCyan = 36
    fgWhite = 37
    fgColor = 38
    
    bgBlack = 40
    bgRed = 41
    bgGreen = 42
    bgYellow = 43
    bgBlue = 44
    bgMagenta = 45
    bgCyan = 46
    bgWhite = 47
    bgColor = 48
    
    mode8Bit = 5
    mode16Bit = 2
    
def setGraphicsMode(*args):
    return '\x1b[{}m'.format(str(args)[1:-1].replace(', ', ';').replace(',', ''))
