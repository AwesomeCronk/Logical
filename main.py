try:
    from PyQt5 import QtWidgets
    from PyQt5.QtWidgets import QApplication, QMainWindow, QAbstractButton, QPushButton, QLabel
    from PyQt5.QtGui import QPixmap, QPainter
except:
    input('Error importing PyQt5 components. (press enter to close)')
    exit()

from logic import _input, _output, _andGate, _orGate

class mainWindow(QMainWindow):
    def __init__(self):
        super(mainWindow, self).__init__()
        print('starting...')
        self.setGeometry(200, 500, 800, 500)
        self.objects = []
        self.generateStaticControls()
        self.testObjects()
        #with open('test.lgc', 'r') as f:
         #   data = f.read()
          #  print(data)
           # f.close()

    def generateStaticControls(self):
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

        self.updateButton = QPushButton(self)
        self.updateButton.setText('Update')
        self.updateButton.setGeometry(730, 470, 60, 20)
        self.updateButton.clicked.connect(self.update)

    def update(self):
        #needsUpdate = True     #Theory for a system that updates as needed instead of a fixed number of times per loop. Potential issues with memory-type circuits.
        #states = []
        #newstates = []
        #while needsUpdate:
        #    needsUpdate = False
        for i in range(5):
            for o in self.objects:
                o.update()

    def initUI(self):
        newAndBtn = QPushButton(self)
        newOrBtn = QPushButton(self)
        newXorBtn = QPushButton(self)
        newInBtn = QPushButton(self)
        newOutBtn = QPushButton(self)

    def newInput(self):
        print('new input')

    def newOutput(self):
        print('new output')

    #and, or, xor, nand, nor, xnor, not
    def newAndGate(self):
        print("new andGate")

    def newOrGate(self):
        print("new orGate")

    def newXorGate(self):
        print("new xorGate")

    def newNandGate(self):
        print("new nandGate")

    def newNorGate(self):
        print("new norGate")

    def newXnorGate(self):
        print("new xnorGate")

    def newNotGate(self):
        print("new notGate")

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
        out1 = gOutput(self)
        in1.move(60, 10)
        in2.move(60, 40)
        and1.move(90, 10)
        out1.move(150, 25)

    def loadProgram(self, programPath):
        programCommands = []
        with open(programPath, 'r') as programFile:
            loop = True
            while loop:
                data = programFile.readline()
                if data:
                    programCommands.append(data)
                else:
                    print('Finished reading program file.')
                    loop = False
        return programCommands
        
    def runProgram(self, commands: list):
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
        self.loc = (0, 0)
        super(gGate, self).__init__(self.parent)
        self.pixMap = QPixmap(imagePath)
        self.setGeometry(self.loc[0], self.loc[1], 50, 50)
        
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

#class gXorGate(_xorGate, gGate):
 #   def __init__(self, parent):
  #      self.parent = parent
   #     self.imagePath = 'images/gates/xorRaw.svg'
    #    gGate.__init__(self, self.parent, self.imagePath)
     #   _andGate.__init__(self)