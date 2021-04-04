from logicCore import element, pin

class andGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if bool(self.inputs['a'].value) and bool(self.inputs['b'].value):
            list(self.outputs.values())[0].set(1)
            #print('and gate set high')
        else:
            list(self.outputs.values())[0].set(0)
            #print('and gate set low')

class orGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if bool(self.inputs['a'].value) or bool(self.inputs['b'].value):
            list(self.outputs.values())[0].set(1)
            #print('or gate set high')
        else:
            list(self.outputs.values())[0].set(0)
            #print('or gate set low')

class xorGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if (bool(self.inputs['a'].value) or bool(self.inputs['b'].value)) and not (bool(self.inputs['a'].value) and bool(self.inputs['b'].value)):
            list(self.outputs.values())[0].set(1)
            #print('xor gate set high')
        else:
            list(self.outputs.values())[0].set(0)
            #print('xor gate set low')

class notGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if bool(self.inputs['a'].value):
            list(self.outputs.values())[0].set(0)
            #print('xnor gate set low')
        else:
            list(self.outputs.values())[0].set(1)
            #print('xnor gate set high')

class nandGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if bool(self.inputs['a'].value) and bool(self.inputs['b'].value):
            list(self.outputs.values())[0].set(0)
            #print('nand gate set low')
        else:
            list(self.outputs.values())[0].set(1)
            #print('nand gate set high')

class norGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if bool(self.inputs['a'].value) or bool(self.inputs['b'].value):
            list(self.outputs.values())[0].set(0)
            #print('nor gate set low')
        else:
            list(self.outputs.values())[0].set(1)
            #print('nor gate set high')

class xnorGate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        element.update(self)
        if (bool(self.inputs['a'].value) or bool(self.inputs['b'].value)) and not (bool(self.inputs['a'].value) and bool(self.inputs['b'].value)):
            list(self.outputs.values())[0].set(0)
            #print('xnor gate set low')
        else:
            list(self.outputs.values())[0].set(1)
            #print('xnor gate set high')

class truthTable(element):
    def __init__(self):
        element.__init__(self)
        self.table = {}

    def append(self, match, result):     #match and result should be tuples
        self.table.update({match: result})

    def update(self):
        element.update(self)
        match = []
        for i in range(len(self.inputs)):       #Get value of each pin and append it to the match dict
            match.append(list(self.inputs.values())[i].value)
        match = tuple(match)
        result = self.table[match]      #Get match as tuple so that it can be used as a dict index
        for o in range(len(result)):
            list(self.outputs.values())[o].set(result[o])