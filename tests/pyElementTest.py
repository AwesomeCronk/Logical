# Logical test file
# To use, run pyElementTest.lgc

class pyElement(element):
    def __init__(self, *args):
        element.__init__(self)
        
        self.addInput(pin('a'))

        self.widget = widget()
        self.widget.setText('pyElement test. Press "a" to activate.')
        self.widget.resize(vec2(len(self.widget.text), 1))
        self.widget.moveTo(vec2(5, 5))
        self.widget.setFGColor((0, 0, 0))

    def update(self):
        element.update(self)
        
        if self.inputs['a'].value:
            self.widget.setBGColor((255, 20, 20))
        else:
            self.widget.setBGColor((127, 10, 10))