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

class display():
    def __init__(self, size: vec2 = vec2(1,1), pos: vec2 = vec2(0,0), wrapping = 0):
        self.size = size
        self.pos = pos
        self.wrapping = wrapping
        
        self.text = ''
        
        # print(self.size[0])
        
    def update(self):
        print(ansi.cursor.Home(), end = '')
        print(ansi.cursor.MoveTo(*self.pos), end = '')
        textToPrint = []
        # print(self.size[0])
        
        for string in self.text.split('\n'):
            # print(string)
            line = string[0:self.size[0]]
            leftover = string[self.size[0]:]
            textToPrint.append(line)
            if self.wrapping == 1:
                while leftover:
                    line = leftover[0:self.size[0]]
                    leftover = leftover[self.size[0]:]
                    textToPrint.append(line)
        
        # print(textToPrint)
        
        # print('\nPrinting contents now.\n')
        
        for i in range(self.size[1]):
        #     print(i)
            print(textToPrint[i], end = '')
            self.moveTo(self.pos + vec2(0, 1))
            print(ansi.cursor.MoveTo(*(self.pos)), end = '')
    
    def setText(self, text):
        self.text = text
    
    def moveTo(self, pos: vec2):
        self.pos = pos
        
def testUI():
    print(ansi.clear.EntireScreen(), end = '')
    print(ansi.cursor.Home(), end = '')
    
    d1 = display(vec2(16, 2), vec2(1, 1), 1)
    # d2 = display(vec2(10, 3), vec2(1, 4), 1)
    
    d1.setText('Hello world!\nThis is the size of an LCD!')
    # d2.setText('This text should wrap around a time or two.')
    
    d1.update()
    # d2.update()
    
if __name__ == '__main__':
    ansi.conhostEnableANSI()
    testUI()