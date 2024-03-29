from logic.core import element, pin
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
        self.table = None

    def setupTable(self):
        self.table = ['0' * len(self.outputs)] * (2 ** len(self.inputs))

    def addMatch(self, match, result):     # match and result should be lists
        if self.table is None:
            raise Exception('Must call setupTable first.')
        else:
            self.table[match] = result
        print(self.table)

    def update(self):
        element.update(self)
        match = int('0b' + ''.join([str(self.inputs[pinName].value) for pinName in list(self.inputs.keys())]), base=2)
        result = self.table[match]
        for o, outputPin in enumerate(self.outputs.values()):
            outputPin.set(int(result[o]))

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
            # print('tristate values are {} {}'.format(t.inputs['a'].value, t.inputs['e'].value))
            if t.inputs['e'].value:
                if activeTristate is None:  # If there is not already an active tristate,
                    activeTristate = t          # Select the current one as active.
                else:
                    raise busError('Multiple tristates enabled.')   # Otherwise raise a busError.
                # print(activeTristate)
        # input('press enter to continue...')
                
        # If we got here, everything is ok. Set the ouptut of the bus to the value of the tristate's input pin.
        if not activeTristate is None:
            self.outputs['y'].set(activeTristate.inputs['a'].value)
        else:
            self.outputs['y'].set(0)
            
class led(element):
    def __init__(self, colorR, colorG, colorB, posX, posY):
        element.__init__(self)
        self.litColor = (int(colorR), int(colorG), int(colorB))
        self.dimColor = (int(self.litColor[0] / 2), int(self.litColor[1] / 2), int(self.litColor[2] / 2))
        self.pos = vec2(int(posX), int(posY))
        self.addInput(pin('a'))

        self.widget = widget()
        self.widget.resize(vec2(1,1))
        self.widget.moveTo(self.pos)
        self.widget.setMode(widget.textMode)
        self.widget.setText(' ')
        self.widget.setBGColor(self.dimColor)

    def update(self):
        element.update(self)
        if self.inputs['a'].value:
            self.widget.setBGColor(self.litColor)
        else:
            self.widget.setBGColor(self.dimColor)

class button(element):
    def __init__(self, keyBind):
        element.__init__(self)
        self.keyBinds = {keyBind: [self.keyEvent]}
        self.addOutput(pin('y'))

    def keyEvent(self, state):
        if state:
            self.outputs['y'].set(1)
        else:
            self.outputs['y'].set(0)

class switch(element):
    def __init__(self, keyBind):
        element.__init__(self)
        self.writeable = True
        self.keyBinds = {keyBind: [self.keyEvent]}
        self.addOutput(pin('y'))

    def keyEvent(self, state):
        if state:
            if self.writeable:
                self.outputs['y'].set(1 - self.outputs['y'].value)
                self.writeable = False
        else:
            self.writeable = True

class label(element):
    def __init__(self, colorR, colorG, colorB, posX, posY, text):
        element.__init__(self)
        
        width, height = 0, 0
        self.text = text.replace('\\n', '\n')
        for line in self.text.split('\n'):
            if len(line) > width:
                width = len(line)
            height += 1
        self.blankText = (' ' * width + '\n') * self.height
        
        self.addInput(pin('a'))
        self.widget = widget()
        self.widget.setText(self.text)
        self.widget.moveTo(vec2(posX, posY))
        self.widget.resize(vec2(width, height))
        self.widget.setFGColor((colorR, colorG, colorB))

    def update(self):
        element.update(self)
        if self.inputs['a'].value:
            self.widget.setText(self.text)
        else:
            self.widget.setText(self.blankText)
