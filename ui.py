import simpleANSI as ansi

class pos():
    def __init__(self, x, y):
        self.x = x
        self.y = y
        
    def __add__(self, other):
        assert isinstance(other, pos)
        return pos(self.x + other.x, self.y + other.y)
    
    def __radd__(self, other):
        assert isinstance(other, pos)
        return pos(self.x + other.x, self.y + other.y)
    
    def __sub__(self, other):
        assert isinstance(other, pos)
        return pos(self.x - other.x, self.y - other.y)
    
    def __str__(self):
        return 'pos({}, {})'.format(self.x, self.y)
    
    def __repr__(self):
        return self.__str__()

class display():
    def __init__(self, size: tuple = (1,1), position: tuple = (0,0), wrapping = 0):
        self.size = size
        self.position = position
        self.wrapping = wrapping
        
        self.text = ''
        
    def update(self):
        print(ansi.cursor.Home(), end = 0)
        print(ansi.cursor.MoveTo(**self.position), end = 0)
        textToPrint = []
        
        for string in self.text.split('\n'):
            line = string[0:self.size[0]]
            leftover = string[self.size[0]:]
            textToPrint.append(line)
            if self.wrapping:
                while leftover:
                    line = string[0:self.size[0]]
                    leftover = string[self.size[0]:]
                    textToPrint.append(line)
                    
        for line in textToPrint:
            print(line, end = 0)
    
    def setText(self, text):
        self.text = text
        