import sys, time
import simpleANSI as ansi

class vec2():
    def __init__(self, x, y):
        self.x = x
        self.y = y
        
    def __add__(self, other):
        assert isinstance(other, vec2)
        return vec2(self.x + other.x, self.y + other.y)
    
    def __radd__(self, other):
        assert isinstance(other, vec2)
        return vec2(self.x + other.x, self.y + other.y)
    
    def __sub__(self, other):
        assert isinstance(other, vec2)
        return vec2(self.x - other.x, self.y - other.y)
    
    def __eq__(self, other):
        assert isinstance(other, vec2)
        return self.x == other.x and self.y == other.y
    
    def __ne__(self, other):
        assert isinstance(other, vec2)
        return self.x != other.x or self.y != other.y
    
    def __str__(self):
        return 'vec2({}, {})'.format(self.x, self.y)
    
    def __repr__(self):
        return self.__str__()
    
    def __iter__(self):
        yield from (self.x, self.y)
        
    def __getitem__(self, key):
        assert isinstance(key, int)
        if key == 0:
            return self.x
        elif key == 1:
            return self.y
        else:
            raise IndexError('invalid index for vec2: {}'.format(key))

class widget():
    consolePosOffset = vec2(1,1)
    # Modes
    containerMode = 'container'
    textMode = 'text'
    modes = [containerMode, textMode]

    def __init__(self):
        self.parent = None
        self.size = vec2(10,1)
        self.pos = vec2(0,0)
        self.mode = self.textMode
        self.wrapping = 0
        self.fgColor = (255, 255, 255)
        self.bgColor = (0, 0, 0)
        self.text = ''
        self.widgets = []
        
        # print(self.size[0])
        
    def update(self):
        # Parent check and cursor homing (to prevent colored bars at the bottom of the console)
        if self.parent is None:
            print(ansi.cursor.moveTo(*(self.pos + self.consolePosOffset)), end='')
        elif isinstance(self.parent, widget):
            print(ansi.cursor.moveTo(*(self.pos + self.parent.pos + self.consolePosOffset)), end='')
        
        print(ansi.graphics.setGraphicsMode(
            ansi.graphics.fgColor,
            ansi.graphics.mode16Bit,
            self.fgColor[0],
            self.fgColor[1],
            self.fgColor[2]
        ), end='')
        print(ansi.graphics.setGraphicsMode(
            ansi.graphics.bgColor,
            ansi.graphics.mode16Bit,
            self.bgColor[0],
            self.bgColor[1],
            self.bgColor[2]
        ), end='')

        if self.mode == self.containerMode:
            for w in self.widgets:
                w.update()

        elif self.mode == self.textMode:            
            # Convert text to a list of lines
            textToPrint = []
            for string in self.text.split('\n'):
                line = string[0:self.size[0]]
                leftover = string[self.size[0]:]
                textToPrint.append(line)
                if self.wrapping == 1:
                    while leftover:
                        line = leftover[0:self.size[0]]
                        leftover = leftover[self.size[0]:]
                        textToPrint.append(line)
            
            # Print the list of lines
            for i in range(self.size[1]):
                if self.parent is None:
                    newPos = self.pos + self.consolePosOffset + vec2(0, i)
                elif isinstance(self.parent, widget):
                    newPos = self.pos + self.parent.pos + self.consolePosOffset + vec2(0, i)
                print(ansi.cursor.moveTo(*newPos), end='')
                try:
                    print(textToPrint[i], end='')
                except IndexError:
                    pass
    
    def setparent(self, newParent):
        self.parent = newParent

    def resize(self, size: vec2):
        self.size = size

    def moveTo(self, pos: vec2):
        self.pos = pos

    def setMode(self, mode: str):
        if mode in self.modes:
            self.mode = mode
        else:
            raise ValueError('invalid mode "{}"'.format(mode))

    def setWrapping(self, wrapping: int):
        self.wrapping = wrapping

    def setFGColor(self, color: tuple):
        self.fgColor = color

    def setBGColor(self, color: tuple):
        self.bgColor = color
    
    def setText(self, text: str):
        self.text = text

    def addWidget(self, newWidget):
        self.widgets.append(newWidget)
        

class ansiManager():
    def __init__(self):
        pass

    def __enter__(self):
        if sys.platform == 'win32':
            print(ansi.conhostEnableANSI(), end='')
        print(ansi.clear.entireScreen(), end='')
        print('\x1b[?25l', end='')    # Hide cursor

    def __exit__(self, *args):
        print('\nANSI Manager: Commencing cleanup...', end='end\n')
        # print('\x1b[25h', end='')     # Show cursor
        print('ANSI manager: Cursor showing.')
        print('\x1b[39;49m', end='')            # Reset colors
        print('ANSI manager: Colors reset.')

def testUI():
    print(ansi.clear.entireScreen(), end='')
    print(ansi.cursor.home(), end='')
    
    mainWidget = widget()
    mainWidget.setMode(widget.containerMode)

    w1 = widget()
    w1.moveTo(vec2(1, 0))
    w1.resize(vec2(22, 2))
    w1.setMode(widget.textMode)
    w1.setText('Hello world!\nThis text cuts off soon.')
    mainWidget.addWidget(w1)
    mainWidget.update()

    w2 = widget()
    w2.moveTo(vec2(25, 2))
    w2.resize(vec2(20, 1))
    w2.setMode(widget.textMode)
    w2.setWrapping(1)
    w2.setFGColor((255, 0, 0))
    w2.setText('We have colors!!!')
    mainWidget.addWidget(w2)
    mainWidget.update()

    w3 = widget()
    w3.moveTo(vec2(15, 5))
    w3.resize(vec2(11, 5))
    w3.setMode(widget.textMode)
    w3.setWrapping(1)
    w3.setText('This text should wrap around several times.')
    mainWidget.addWidget(w3)
    mainWidget.update()
    
if __name__ == '__main__':
    ansi.conhostEnableANSI()
    with ansiManager():
        testUI()
        print(ansi.cursor.moveTo(0, 20), end='')