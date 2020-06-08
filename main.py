try:
    import PyQt5
    from PyQt5.QtWidgets import QApplication, QMainWindow, QAbstractButton, QPushButton, QLabel
    from PyQt5.QtGui import QPixmap, QPainter, QCursor
except:
    input('Error importing PyQt5 components. (press enter to close)')
    exit()

from logic import (_input, _output, _andGate, _orGate, _xorGate,
                   _nandGate, _norGate, _xnorGate, _notGate)

class mainWindow(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)
        print('starting...')
        self.initData()
        self.initUI()
        self.testObjects()
                
    def initData(self):
        self.objects = []
        self.updateCycles = 5
        self.projectDir = 'projects/'
        self.objectToPlace = ''
        self.placeLocation = ()
        self.objectTypes = {'in': gInput, 'out': gOutput, 'and': gAndGate, 'or': gOrGate, 'xor': gXorGate,
                            'nand': gNandGate, 'nor': gNorGate, 'xnor': gXnorGate, 'not': gNotGate}

    def initUI(self):
        self.setGeometry(200, 500, 800, 500)
        self.objectButtons()
        self.canvas = QLabel(self)
        self.canvas = QPushButton(self)
        self.canvas.setText('')
        self.canvas.setGeometry(60, 10, 740, 450)
        self.canvas.clicked.connect(self.placeObject)
        self.updateButton = QPushButton(self)
        self.updateButton.setText('Update')
        self.updateButton.setGeometry(730, 470, 60, 20)
        self.updateButton.clicked.connect(self.update) 

    def objectButtons(self):
        self.newAndButton = QPushButton(self)
        self.newAndButton.setText('and')
        self.newAndButton.setGeometry(10, 10, 40, 20)
        self.newAndButton.clicked.connect(self.newAndGate)

        self.newOrButton = QPushButton(self)
        self.newOrButton.setText('or')
        self.newOrButton.setGeometry(10, 40, 40, 20)
        self.newOrButton.clicked.connect(self.newOrGate)

        self.newXorButton = QPushButton(self)
        self.newXorButton.setText('xor')
        self.newXorButton.setGeometry(10, 70, 40, 20)
        self.newXorButton.clicked.connect(self.newXorGate)

        self.newNandButton = QPushButton(self)
        self.newNandButton.setText('nand')
        self.newNandButton.setGeometry(10, 100, 40, 20)
        self.newNandButton.clicked.connect(self.newNandGate)

        self.newNorButton = QPushButton(self)
        self.newNorButton.setText('nor')
        self.newNorButton.setGeometry(10, 130, 40, 20)
        self.newNorButton.clicked.connect(self.newNorGate)

        self.newXnorButton = QPushButton(self)
        self.newXnorButton.setText('xnor')
        self.newXnorButton.setGeometry(10, 160, 40, 20)
        self.newXnorButton.clicked.connect(self.newXnorGate)
        
        self.newNotButton = QPushButton(self)
        self.newNotButton.setText('not')
        self.newNotButton.setGeometry(10, 190, 40, 20)
        self.newNotButton.clicked.connect(self.newNotGate)
        
    #in, out, and, or, xor, nand, nor, xnor, not
    def newInput(self):
        print('new input')
        self.objectToPlace = 'in'

    def newOutput(self):
        print('new output')
        self.objectToPlace = 'out'

    def newAndGate(self):
        print("new andGate")
        self.objectToPlace = 'and'

    def newOrGate(self):
        print("new orGate")
        self.objectToPlace = 'or'

    def newXorGate(self):
        print("new xorGate")
        self.objectToPlace = 'xor'

    def newNandGate(self):
        print("new nandGate")
        self.objectToPlace = 'nand'

    def newNorGate(self):
        print("new norGate")
        self.objectToPlace = 'nor'

    def newXnorGate(self):
        print("new xnorGate")
        self.objectToPlace = 'xnor'

    def newNotGate(self):
        print("new notGate")
        self.objectToPlace = 'not'

    def placeObject(self):
        if self.objectToPlace != '':
            print('placing object {}'.format(self.objectToPlace))
            self.placeLocation = ((QCursor.pos() - self.pos()).x(), (QCursor.pos() - self.pos()).y() - 30)
            print(self.placeLocation)
            newObject = self.objectTypes[self.objectToPlace](self)
            print(newObject)
            self.objects.append(newObject)
            print('appended')
            #print(type(newObject) is gOrGate)
            newObject.move(self.placeLocation[0], self.placeLocation[1])
            print('moved')
            #self.objects[2].move(self.placeLocation[0], self.placeLocation[1])
            print(self.objects)

    def update(self):
        #needsUpdate = True     #Theory for a system that updates as needed instead of a fixed number of times per loop. Potential issues with memory-type circuits.
        #states = []
        #newstates = []
        #while needsUpdate:
        #    needsUpdate = False
        for i in range(self.updateCycles):
            for o in self.objects:
                print(o)
                o.update()

    def testGates(self):
        andGate = _andGate()
        orGate = _orGate()
        in1 = gInput(self)
        in2 = gInput(self)
        out1 = gOutput(self)
        out2 = gOutput(self)

        andGate._in[0].connect(in1._out)
        andGate._in[1].connect(in2._out)
        out1._in.connect(andGate._out)
        
        orGate._in[0].connect(in1._out)
        orGate._in[1].connect(in2._out)
        out2._in.connect(orGate._out)

        andGate.update()    #0, 0
        orGate.update()
        out1.update()
        out2.update()

        in2.toggle()
        andGate.update()    #0, 1
        orGate.update()
        out1.update()
        out2.update()

        in1.toggle()        #1, 0
        in2.toggle()
        andGate.update()
        orGate.update()
        out1.update()
        out2.update()

        in2.toggle()        #1, 1
        andGate.update()
        orGate.update()
        out1.update()
        out2.update()

    def testObjects(self):
        in1 = gInput(self)
        in2 = gInput(self)
        and1 = gAndGate(self)
        or1 = gOrGate(self)
        out1 = gOutput(self)
        out2 = gOutput(self)

        in1.move(70, 20)
        in2.move(70, 50)
        and1.move(100, 20)
        or1.move(100, 80)
        out1.move(160, 35)
        out2.move(160, 65)

        and1._in[0].connect(in1._out)
        and1._in[1].connect(in2._out)
        or1._in[0].connect(in1._out)
        or1._in[1].connect(in2._out)
        out1._in.connect(and1._out)
        out2._in.connect(or1._out)

        self.objects.append(in1)
        self.objects.append(in2)
        self.objects.append(and1)
        self.objects.append(or1)
        self.objects.append(out1)
        self.objects.append(out2)

    def loadProgram(self, programPath):
        commands = []
        with open(programPath, 'r') as programFile:
            loop = True
            while loop:
                data = programFile.readline()
                if data:
                    commands.append(data)
                else:
                    print('Finished reading program file.')
                    loop = False
        nameComp = {}
        for c in commands:
            data = c.split()
            if data[0] == 'INPUT':
                self.newInput()
                
# Object definitions:
class gInput(QPushButton):
    xSize = 20
    ySize = 20
    def __init__(self, parent):
        self.parent = parent
        QPushButton.__init__(self, self.parent)
        self.clicked.connect(self.toggle)
        self.value = False
        self._out = _output()
        self.setText(str(int(self.value)))

    def toggle(self):
        self.value = not self.value
        self._out.set(self.value)
        self.setText(str(int(self.value)))

    def move(self, xPos, yPos):
        self.xPos = xPos
        self.yPos = yPos
        self.setGeometry(self.xPos, self.yPos, self.xSize, self.ySize)

    def update(self):
        pass

class gOutput(QLabel):
    xSize = 20
    ySize = 20
    styleSheet = """background-color: rgb(225, 225, 225);\n
        border: 1px solid rgb(173, 173, 173);\n
        text-align: center;"""

    def __init__(self, parent):
        self.parent = parent
        QLabel.__init__(self, self.parent)
        self.value = False
        self._in = _input()
        self.setText(str(int(self.value)))
        self.setStyleSheet(self.styleSheet)

    def connect(self, target):
        self._in.connect(target)

    def move(self, xPos, yPos):
        self.xPos = xPos
        self.yPos = yPos
        self.setGeometry(self.xPos, self.yPos, self.xSize, self.ySize)

    def update(self):
        self.value = self._in.fetch()
        self.setText(str(int(self.value)))
        print('update for {} with value {}'.format(self, self.value))

class gGate(QAbstractButton):
    xSize = 50
    ySize = 50
    def __init__(self, parent, imagePath):
        self.parent = parent
        self.imagePath = imagePath
        QAbstractButton.__init__(self, self.parent)
        self.move(70, 20)
        self.pixMap = QPixmap(imagePath)
        
    def paintEvent(self, event):
        painter = QPainter(self)
        painter.drawPixmap(event.rect(), self.pixMap)

    def sizeHint(self):
        return self.pixMap.size()

    def move(self, xPos, yPos):
        self.xPos = xPos
        self.yPos = yPos
        self.setGeometry(self.xPos, self.yPos, self.xSize, self.ySize)

class gAndGate(_andGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/andRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _andGate.__init__(self)

class gOrGate(_orGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/orRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _andGate.__init__(self)

class gXorGate(_xorGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/xorRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _andGate.__init__(self)

class gNandGate(_nandGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/andRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _andGate.__init__(self)

class gNorGate(_norGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/orRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _andGate.__init__(self)

class gXnorGate(_xnorGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/xorRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _andGate.__init__(self)

class gNotGate(_notGate, gGate):
    def __init__(self, parent):
        self.parent = parent
        self.imagePath = 'images/gates/notRaw.svg'
        gGate.__init__(self, self.parent, self.imagePath)
        _notGate.__init__(self)