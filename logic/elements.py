from logic.core import element, pin
from ui import widget, vec2

class andGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        values = [self.inputs['a'].value, self.inputs['b'].value]
        if values == [None, None]:
            next(iter(self.outputs.values())).set(None)
        elif values.count(1) == 2:
            next(iter(self.outputs.values())).set(1)
            #print('and gate set high')
        else:
            next(iter(self.outputs.values())).set(0)
            #print('and gate set low')

class orGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        values = [self.inputs['a'].value, self.inputs['b'].value]
        if values == [None, None]:
            next(iter(self.outputs.values())).set(None)
        elif 1 in values:
            next(iter(self.outputs.values())).set(1)
            #print('or gate set high')
        else:
            next(iter(self.outputs.values())).set(0)
            #print('or gate set low')

class xorGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        values = [self.inputs['a'].value, self.inputs['b'].value]
        if values == [None, None]:
            next(iter(self.outputs.values())).set(None)
        elif values.count(1) == 1:
            next(iter(self.outputs.values())).set(1)
            #print('xor gate set high')
        else:
            next(iter(self.outputs.values())).set(0)
            #print('xor gate set low')

class notGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addOutput(pin('y'))

    def update(self):
        if self.inputs['a'].value is None:
            next(iter(self.outputs.values())).set(None)
        elif self.inputs['a'].value == 1:
            next(iter(self.outputs.values())).set(0)
            #print('xnor gate set low')
        else:
            next(iter(self.outputs.values())).set(1)
            #print('xnor gate set high')

class nandGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        values = [self.inputs['a'].value, self.inputs['b'].value]
        if values == [None, None]:
            next(iter(self.outputs.values())).set(None)
        elif values.count(1) == 2:
            next(iter(self.outputs.values())).set(0)
            #print('and gate set high')
        else:
            next(iter(self.outputs.values())).set(1)
            #print('and gate set low')

class norGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        values = [self.inputs['a'].value, self.inputs['b'].value]
        if values == [None, None]:
            next(iter(self.outputs.values())).set(None)
        elif 1 in values:
            next(iter(self.outputs.values())).set(0)
            #print('or gate set high')
        else:
            next(iter(self.outputs.values())).set(1)
            #print('or gate set low')

class xnorGate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('b'))
        self.addOutput(pin('y'))

    def update(self):
        values = [self.inputs['a'].value, self.inputs['b'].value]
        if values == [None, None]:
            next(iter(self.outputs.values())).set(None)
        elif values.count(1) == 1:
            next(iter(self.outputs.values())).set(0)
            #print('xor gate set high')
        else:
            next(iter(self.outputs.values())).set(1)
            #print('xor gate set low')

class truthTable(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
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
        values = [str(self.inputs[pinName].value) for pinName in iter(self.inputs)]
        if 'None' in values:
            unconnectedPins = True
        else:
            unconnectedPins = False
        if unconnectedPins:
            for o, outputPin in enumerate(self.outputs.values()):
                outputPin.set(None)
        else:
            match = int('0b' + ''.join(values), base=2)
            result = self.table[match]
            for o, outputPin in enumerate(self.outputs.values()):
                outputPin.set(int(result[o]))

class tristate(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(0)
        self.addInput(pin('a'))
        self.addInput(pin('e'))
        self.addOutput(pin('y'))

    def update(self):
        if self.inputs['e'].value == 1:
            self.outputs['y'].set(self.inputs['a'].value)
        else:
            self.outputs['y'].set(None)
            
class led(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(5)
        colorR, colorG, colorB, posX, posY = self.arguments
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
        if self.inputs['a'].value:
            self.widget.setBGColor(self.litColor)
        else:
            self.widget.setBGColor(self.dimColor)

class label(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(10)
        fgColorR, fgColorG, fgColorB, bgColorR, bgColorG, bgColorB, posX, posY, text, mode = arguments
        
        # Height calculations and newline management
        width, height = 0, 0
        self.text = text.replace('\\n', '\n')
        for line in self.text.split('\n'):
            if len(line) > width:
                width = len(line)
            height += 1

        # Mode handling
        if mode in ['fg', 'bg']:
            self.mode = mode
        else:
            raise Exception('Invalid mode "{}" for label'.format(mode))
                
        # Color calculations
        self.fgLitColor = (int(fgColorR), int(fgColorG), int(fgColorB))
        self.fgDimColor = (int(self.fgLitColor[0] / 2), int(self.fgLitColor[1] / 2), int(self.fgLitColor[2] / 2))
        self.bgLitColor = (int(bgColorR), int(bgColorG), int(bgColorB))
        self.bgDimColor = (int(self.bgLitColor[0] / 2), int(self.bgLitColor[1] / 2), int(self.bgLitColor[2] / 2))

        # Widget setup
        self.addInput(pin('e'))
        self.widget = widget()
        self.widget.setText(self.text)
        self.widget.moveTo(vec2(int(posX), int(posY)))
        self.widget.resize(vec2(int(width), int(height)))

        # Precoloring
        if self.mode == 'fg':
            self.widget.setFGColor(self.fgDimColor)
            self.widget.setBGColor(self.bgLitColor)
        elif self.mode == 'bg':
            self.widget.setFGColor(self.fgLitColor)
            self.widget.setBGColor(self.bgDimColor)

    def update(self):
        if self.inputs['e'].value:
            if self.mode == 'fg':
                self.widget.setFGColor(self.fgLitColor)
            elif self.mode == 'bg':
                self.widget.setBGColor(self.bgLitColor)
        else:
            if self.mode == 'fg':
                self.widget.setFGColor(self.fgDimColor)
            elif self.mode == 'bg':
                self.widget.setBGColor(self.bgDimColor)

class button(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(1)
        self.keyBinds = {arguments[0]: [self.keyEvent]}
        self.addOutput(pin('y'))
        self.outputs['y'].set(0)

    def preUpdate(self):
        pass

    def update(self):
        pass

    def keyEvent(self, state):
        if state:
            self.outputs['y'].set(1)
        else:
            self.outputs['y'].set(0)

class switch(element):
    def __init__(self, id, command, arguments):
        element.__init__(self, id, command, arguments)
        self.ensureNumArguments(1)
        self.writeable = True
        self.value = 0
        self.keyBinds = {arguments[0]: [self.keyEvent]}
        self.addOutput(pin('y'))
        self.outputs['y'].set(0)

    def preUpdate(self):
        pass

    def update(self):
        pass

    def keyEvent(self, state):
        if state:
            if self.writeable:
                self.value = 1 - self.value
                self.outputs['y'].set(self.value)
                self.writeable = False
        else:
            self.writeable = True
