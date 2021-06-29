from logicCore import element, pin
from ui import widget, vec2

# Error raised by bus elements
class busError(Exception):
    pass

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

class tristate(element):
    def __init__(self):
        element.__init__(self)
        self.addInput(pin('a'))
        self.addInput(pin('e'))
        # tristate has no output.
        self.enabled = 0

class bus(element):
    def __init__(self):
        element.__init__(self)
        self.addOutput(pin('y'))
        self.tristates = []
        
    def addTristate(self, tristate):
        self.tristates.append(tristate)
        
    def update(self):
        #breakpoint()
        activeTristate = None
        for t in self.tristates:
            print('tristate values are {} {}'.format(t.inputs['a'].value, t.inputs['e'].value))
            if t.inputs['e'].value:
                if activeTristate is None:  # If there is not already an active tristate,
                    activeTristate = t          # Select the current one as active.
                else:
                    raise busError('Multiple tristates enabled.')   # Otherwise raise a busError.
                print(activeTristate)
        input('press enter to continue...')
                
        # If we got here, everything is ok. Set the ouptut of the bus to the value of the tristate's input pin.
        if not activeTristate is None:
            self.outputs['y'].set(activeTristate.inputs['a'].value)
        else:
            self.outputs['y'].set(0)
            
class led(element):
    def __init__(self, colorR, colorG, colorB, posX, posY):
        element.__init__(self)
        self.color = (int(colorR), int(colorG), int(colorB))
        self.pos = vec2(int(posX), int(posY))
        self.addInput(pin('a'))

        self.widget = widget()
        self.widget.resize(vec2(1,1))
        self.widget.moveTo(self.pos)
        self.widget.setMode(widget.textMode)
        self.widget.setFGColor(self.color)

    def update(self):
        element.update(self)
        if self.inputs['a'].value:
            self.widget.setText('1')
        else:
            self.widget.setText('0')

class switch(element):
    def __init__(self, keyBind):
        element.__init__(self)
        self.keyBind = keyBind
        self.addOutput(pin('y'))
