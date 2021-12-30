class pin():    #Basic pin class
    def __init__(self, name):
        self.name = name
        self.alias = name
        self.targets = []
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

    def set(self, value):
        self.value = value

    def toggle(self):
        self.value = 1 - self.value
    
    def fetch(self):
        values = [target.value for target in self.targets]
        if 1 in values and 0 in values:
            raise Exception('Contending inputs for {}'.format(self))
        elif 1 in values:
            self.set(1)
        elif 0 in values:
            self.set(0)
        else:
            self.set(None)
        # print('targets: {}'.format(self.targets), end='')
        # print('values: {}'.format(values), end='')

class element():    # Basic element class
    def __init__(self):
        self.inputs = {}        # dict of inputs by {name: pin}
        self.aliasInputs = {}   # dict of inputs by {alias: pin}
        self.outputs = {}       # dict of outputs by {name: pin}
        self.aliasOutputs = {}  # dict of outputs by {alias: pin}
        self.internalPins = {}  # dict of internal pins by {name: [pin, pin...]} for ease of connecting elements
        self.aliasInternalPins = {} # dict of internal pins by {alias: [pin, pin...]} for ease of connecting elements
        self.args = []          # list of arguments
        self.elements = []      # list of elements in this element
        self.keyBinds = {}      # dict of key bindings by {key: [function, function]}

    def addInput(self, newPin):
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

    def preUpdate(self):
        for i in self.inputs.values():
            i.fetch()
        for e in self.elements:
            e.preUpdate()

    def update(self):
        for e in self.elements:
            e.update()
        for o in self.outputs.values():
            o.fetch()