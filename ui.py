import simpleANSI as ansi

class display():
    def __init__(self, size: tuple = (1,1), pos: tuple = (0,0)):
        self.size = size
        self.pos = pos
        self.text = ''
        
    def update(self):
        print(ansi.cursor.Home())
        print(ansi.cursor.MoveTo(**self.pos))
        textToPrint = []
        
        for i, string in enumerate(self.text.split('\n')):
            # Replace this with a function that takes one display width out of a string and returns it and the overflow.
            overflowText = ''
            begin = i * self.size[0]
            end = (i + 1) * self.size[0]
            if end >= len(text)
            textToPrint.append(string[begin:end])
    
    def setText(self, text):
        self.text = text
        