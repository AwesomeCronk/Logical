class _gate():
    gateType = 'none'

    def __init__(self, gateType):
        self._in = [_input(), _input()]
        self._out = _output()
        self.gateType = gateType

#    def config(self, gateType, inputTargets):
#        #just some safety checks
#        if gateType not in supportedGates:
#            return False
#   
#        self.gateType = gateType
#        if type(inputTargets) is not list:
#            return False
#
#        for i in inputTargets:
#            if type(i) is not output:
#                return False
#        
#        self.gateType = gateType
#        for i in range(len(self._in)):
#            self._in[i].point(inputTargets[i])

    def update(self):
        print("update for {} of type '{}'".format(self, self.gateType))

        if self.gateType == 'and':
            if self._in[0].fetch() and self._in[1].fetch():
                self._out.set(True)
            else:
                self._out.set(False)

class _input():
    value = False
    reference = None

    def __init__(self):
        pass

    def point(self, target):
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