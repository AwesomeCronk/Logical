class ParseError():
    def __init__(self, message, file='', line=-1):
        self.message = message
        self.file = file
        self.line = line

    def __repr__(self):
        return 'ParseError (file {}, line {}): {}'.format(self.file, self.line, self.message)

    __str__ = __repr__

class LoadError():
    def __init__(self, message, elementID=-1, file='', line=-1):
        self.message = message
        self.elementID = elementID
        self.file = file
        self.line = line

    def __repr__(self):
        return 'LoadError (element {}, file {}, line {}): {}'.format(self.elementID, self.file, self.line, self.message)

    __str__ = __repr__

class SimulateError():
    def __init__(self, message, elementID=-1, file='', line=-1):
        self.message = message
        self.elementID = elementID
        self.file = file
        self.line = line

    def __repr__(self):
        return 'SimulateError (element {}, file {}, line {}): {}'.format(self.elementID, self.file, self.line, self.message)

    __str__ = __repr__


def defaultThrowEvent(errorThrown):
    print(errorThrown)
    exit(1)

throwEvent = defaultThrowEvent

def setThrowEvent(event):
    global throwEvent
    throwEvent = event

def throw(errorToThrow):
    throwEvent(errorToThrow)
