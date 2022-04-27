import traceback, logging

from errors import LoadError, SimulateError, throw

class pin():    #Basic pin class
    log = logging.getLogger('pin')

    def __init__(self, name):
        self.name = name
        self.alias = name
        self.targets = []
        self.elementID = -1
        self.value = None

    def rename(self, name):
        self.name = name

    def realias(self, alias):
        self.alias = alias

    def connect(self, target):
        if not target in self.targets:
            self.targets.append(target)

    def disconnect(self, target):
        if target in self.targets:
            self.targets.remove(target)

    def setElementID(self, id):
        self.elementID = id

    def set(self, value):
        # self.log.debug('pin {} ({}) on element {} set to {}'.format(self.name, self.alias, self.elementID, value))
        self.value = value

#     def toggle(self):
#         self.value = 1 - self.value
    
    def fetch(self):
        values = [target.value for target in self.targets]
        if 1 in values and 0 in values:
            throw(SimulateError('Contending inputs for {}'.format(self), self.elementID, None))
        elif 1 in values:
            # if self.value == 0:
            #     self.log.debug('pin {} ({}) on element {} updated to 1'.format(self.name, self.elementID, self.alias))
            self.value = 1
        elif 0 in values:
            # if self.value == 1:
            #     self.log.debug('pin {} ({}) on element {} updated to 0'.format(self.name, self.elementID, self.alias))
            self.value = 0
        else:
            self.value = None
        # print('targets: {}'.format(self.targets), end='')
        # print('values: {}'.format(values), end='')

class element():    # Basic element class
    def __init__(self, id, command, arguments):
        self.id = id
        self.command = command
        self.arguments = arguments

        self.inputs = {}        # dict of inputs by {name: pin}
        self.aliasInputs = {}   # dict of inputs by {alias: pin}
        self.outputs = {}       # dict of outputs by {name: pin}
        self.aliasOutputs = {}  # dict of outputs by {alias: pin}
        self.internalPins = {}  # dict of internal pins by {name: [pin, pin...]} for ease of connecting elements
        self.aliasInternalPins = {} # dict of internal pins by {alias: [pin, pin...]} for ease of connecting elements

        self.elements = []      # list of elements in this element
        self.keyBinds = {}      # dict of key bindings by {key: [function, function]}

    def addInput(self, newPin):
        # Set new pin's elementID to self.id
        newPin.setElementID(self.id)

        # Please note that the pin should be named and aliased before adding it to an element
        # Update inputs
        self.inputs.update({newPin.name: newPin})
        self.aliasInputs.update({newPin.alias: newPin})

        # If there is another pin with that name or ailas, add to the list
        # Otherwise create a new entry
        if newPin.name in self.internalPins.keys():
            self.internalPins[newPin.name].append(newPin)
        else:
            self.internalPins.update({newPin.name: [newPin]})
        if newPin.alias in self.aliasInternalPins.keys():
            self.aliasInternalPins[newPin.alias].append(newPin)
        else:
            self.aliasInternalPins.update({newPin.alias: [newPin]})

    def addOutput(self, newPin):
        # Set new pin's elementID to self.id
        newPin.setElementID(self.id)
        
        # Please note that the pin should be named and aliased before adding it to an element
        self.outputs.update({newPin.name: newPin})
        self.aliasOutputs.update({newPin.alias: newPin})

    def addElement(self, newElement):
        self.elements.append(newElement)
        # Iterate through the pin objects, not their values
        for o in newElement.outputs.values():
            # Same story as in element.addInput
            if o.name in self.internalPins.keys():
                self.internalPins[o.name].append(o)
            else:
                self.internalPins.update({o.name: [o]})
            if o.alias in self.aliasInternalPins.keys():
                self.aliasInternalPins[o.alias].append(o)
            else:
                self.aliasInternalPins.update({o.alias: [o]})
        return self.elements.index(newElement)  # Return the index of the new element in self.elements

    def addKeyBinds(self, keyBinds):
        # Basically this function takes a dict of lists, iterates through the
        # dict keys, and ensures that self.keyBinds has each function in its
        # list for that dict key.
        for key in keyBinds.keys():
            if key in self.keyBinds.keys():
                for f in keyBinds[key]:
                    if not f in self.keyBinds[key]:
                        self.keyBinds[key].append(f)
            else:
                self.keyBinds[key] = keyBinds[key]

    # def setID(self, id):
    #     self.id = id
    #     for pin in self.inputs.values():
    #         pin.setElementID(self.id)
    #     for pin in self.outputs.values():
    #         pin.setElementID(self.id)

    def ensureNumArguments(self, desiredNumArguments):
        numArguments = len(self.arguments)
        if numArguments != desiredNumArguments:
            throw(LoadError('Too {} arguments! Got {}, expected {}'.format('many' if numArguments > desiredNumArguments else 'few', numArguments, desiredNumArguments), elementID=self.id, file=self.command.file, line=self.command.line))

    def preUpdate(self):
        for i in self.inputs.values():
            i.fetch()
        for e in self.elements:
            try:
                e.preUpdate()
            except:
                throw(SimulateError('element preUpdate failure:\n{}'.format(traceback.format_exc()), elementID=e.id, file=e.command.file, line=e.command.line))

    def update(self):
        for e in self.elements:
            try:
                e.update()
            except:
                throw(SimulateError('element update failure:\n{}'.format(traceback.format_exc()), elementID=e.id, file=e.command.file, line=e.command.line))
        for o in self.outputs.values():
            o.fetch()
