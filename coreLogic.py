class pin():    #Basic pin class
    def __init__(self):
        self.name = ''
        self.target = self
        self.value = 0

    def rename(self, name):
        self.name = name

    def connect(self, target):
        self.target = target

    def set(self, value):
        self.value = value

    def toggle(self):
        self.value = 1 - self.value
    
    def update(self):
        self.value = self.target.value

class element():    #Basic element class
    def __init__(self):
        self.inputs = {}        #dict of inputs by {name: pin}
        self.outputs = {}       #dict of outputs by {name: pin}
        self.internalPins = {}  #dict of internal pins by {name: pin} for ease of connecting elements
        self.elements = []      #list of elements in this element

    def addInput(self, newPin):
        #Please note that the pin should be named before adding it to an element
        self.inputs.update({newPin.name: newPin})
        self.internalPins.update({newPin.name: newPin})

    def addOutput(self, newPin):
        #Please note that the pin should be named before adding it to an element
        self.outputs.update({newPin.name: newPin})

    def addElement(self, newElement):
        self.elements.append(newElement)
        for o in newElement.outputs.values():
            self.internalPins.update({o.name: o})
        return self.elements.index(newElement)