class _input():
    value = False
    reference = None

    def __init__(self):
        pass

    def connect(self, target):
        if type(target) is not _output:
            return False
        self.reference = target

    def fetch(self):
        self.value = self.reference.value
        return self.value

class _output():
    value = False

    def __init__(self):
        pass

    def set(self, newValue):
        self.value = bool(newValue)
        
class _gate():
    def __init__(self):
        print('initializing gate {}'.format(self))
        self._in = [_input(), _input()]
        self._out = _output()

class _andGate(_gate):
    def __init__(self):
        _gate.__init__(self)                #I may decide to switch these in the future
        #super(_gate, self).__init__(self)

    def update(self):
        if self._in[0].fetch() and self._in[1].fetch():
            self._out.set(True)
        else:
            self._out.set(False)
            
class _orGate(_gate):
    def __init__(self):
        _gate.__init__(self)                #I may decide to switch these in the future
        #super(_gate, self).__init__(self)

    def update(self):
        if self._in[0].fetch() and not self._in[1].fetch():
            self._out.set(True)
        elif not self._in[0].fetch() and self._in[1].fetch():
            self._out.set(True)
        elif self._in[0].fetch() and self._in[1].fetch():
            self._out.set(True)
        else:
            self._out.set(False)

class _xorGate(_gate):
    def __init__(self):
        _gate.__init__(self)                #I may decide to switch these in the future
        #super(_gate, self).__init__(self)

    def update(self):
        if self._in[0].fetch() != self._in[1].fetch():
            self._out.set(False)
        else:
            self._out.set(True)

class _nandGate(_gate):
    def __init__(self):
        _gate.__init__(self)                #I may decide to switch these in the future
        #super(_gate, self).__init__(self)

    def update(self):
        if self._in[0].fetch() and self._in[1].fetch():
            self._out.set(False)
        else:
            self._out.set(True)
            
class _norGate(_gate):
    def __init__(self):
        _gate.__init__(self)                #I may decide to switch these in the future
        #super(_gate, self).__init__(self)

    def update(self):
        if self._in[0].fetch() and not self._in[1].fetch():
            self._out.set(False)
        elif not self._in[0].fetch() and self._in[1].fetch():
            self._out.set(False)
        elif self._in[0].fetch() and self._in[1].fetch():
            self._out.set(False)
        else:
            self._out.set(True)

class _xnorGate(_gate):
    def __init__(self):
        _gate.__init__(self)                #I may decide to switch these in the future
        #super(_gate, self).__init__(self)

    def update(self):
        if self._in[0].fetch() != self._in[1].fetch():
            self._out.set(False)
        else:
            self._out.set(True)

class _notGate(_gate):
    def __init__(self):
        _gate.__init__(self)
        self._in = _input()

    def update(self):
        if self._in.fetch():
            self._out.set(False)
        else:
            self._out.set(True)