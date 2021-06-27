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
        self.pos = vec2(0,0) + self.consolePosOffset
        self.mode = 'container'
        self.wrapping = 0
        self.fgColor = (255,255,255)
        self.bgColor = (255,255,255)
        self.text = ''
        self.widgets = []
        
        # print(self.size[0])
        
    def update(self):
        # Parent check and cursor homing
        # print(ansi.cursor.home(), end = '')
        if self.parent is None:
            print(ansi.cursor.moveTo(*self.pos), end = '')
        elif self.parent is widget:
            print(ansi.cursor.moveTo(*(self.pos + self.parent.pos)), end = '')
        
        print(ansi.graphics.setGraphicsMode(
            ansi.graphics.fgColor,
            ansi.graphics.mode16Bit,
            self.fgColor[0],
            self.fgColor[1],
            self.fgColor[2]
        ))
        print(ansi.graphics.setGraphicsMode(
            ansi.graphics.bgColor,
            ansi.graphics.mode16Bit,
            self.bgColor[0],
            self.bgColor[1],
            self.bgColor[2]
        ))

        if self.mode == 'container':
            for w in self.widgets:
                w.update()
        elif self.mode == 'text':
            textToPrint = []
            # print(self.size[0])
            
            # Convert text to a list of lines
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
                print(textToPrint[i], end = '')
                print(ansi.cursor.moveTo(*(self.pos + vec2(0, i + 1))), end = '')
    
    def setparent(self, newParent):
        self.parent = newParent

    def resize(self, size: vec2):
        self.size = size

    def moveTo(self, pos: vec2):
        self.pos = pos + self.consolePosOffset

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
        
def testUI():
    print(ansi.clear.entireScreen(), end = '')
    print(ansi.cursor.home(), end = '')
    
    d1 = widget(vec2(22, 2), vec2(1, 1), 'text')
    d2 = widget(vec2(10, 5), vec2(15, 5), 'text')
    d2.wrapping = True
    
    d1.setText('Hello world!\nThis text cuts off soon.')
    d2.setText('This text should wrap around several times.')
    
    d1.update()
    d2.update()
    d2.update()
    
if __name__ == '__main__':
    ansi.conhostEnableANSI()
    testUI()