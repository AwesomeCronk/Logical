class pyElement(element):
    def __init__(self, *args):
        element.__init__(self)
        
        self.addInput(pin('a'))

        self.widget = widget()
        self.widget.resize(vec2(10, 1))
        self.widget.moveTo(vec2(5, 5))
        self.widget.setFGColor((0, 0, 0))
        self.widget.setText('LED sign!')

    def update(self):
        element.update(self)
        
        if self.inputs['a'].value:
            self.widget.setBGColor((255, 0, 0))
        else:
            self.widget.setBGColor((0, 0, 0))