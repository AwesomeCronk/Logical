try:
    from PyQt5 import QtWidgets
    from PyQt5.QtWidgets import QApplication, QMainWindow, QAbstractButton
    from PyQt5.QtGui import QPixmap, QPainter
except:
    input('Error importing PyQt5 components. (press enter to close)')
    exit()

from logic import _gate, _input, _output

class mainWindow(QMainWindow):
    gates = []
    
    def __init__(self):
        super(mainWindow, self).__init__()
        print('starting...')
        
        g = gGate(self, "./images/gates/andRaw.png")
        g.clicked.connect(self.newAndGate)
        #with open('test.lgc', 'r') as f:
         #   data = f.read()
          #  print(data)
           # f.close()

    def testGates(self):
        andGate = _gate('and')
        in1 = gInput()
        in2 = gInput()
        out1 = gOutput()

        andGate._in[0].point(in1._out)
        andGate._in[1].point(in2._out)
        out1._in.point(andGate._out)
        
        andGate.update()
        out1.update()

        in1.toggle()
        andGate.update()
        out1.update()

        in1.toggle()
        in2.toggle()
        andGate.update()
        out1.update()

        in1.toggle()
        andGate.update()
        out1.update()

    def update(self):
        #needsUpdate = True
        #states = []
        #newstates = []
        #while needsUpdate:
        #    needsUpdate = False
        for i in range(5):
            for g in self.gates:
                g.update()

    def initUI(self):
        newAndBtn = QPushButton(self)
        newOrBtn = QPushButton(self)
        newXorBtn = QPushButton(self)
        newInBtn = QPushButton(self)
        newOutBtn = QPushButton(self)

    def newAndGate(self):
        print("new and gate")

class gGate(QAbstractButton):
    loc = (0, 0)
    def __init__(self, parent, imagePath):
        self.parent = parent
        self.imagePath = imagePath
        super(gGate, self).__init__(self.parent)
        self.pixMap = QPixmap(imagePath)
        self.setGeometry(self.loc[0], self.loc[1], 50, 50)
        
    def paintEvent(self, event):
        painter = QPainter(self)
        painter.drawPixmap(event.rect(), self.pixMap)

    def sizeHint(self):
        return self.pixMap.size()

class gInput():
    def __init__(self):
        self.value = False
        self._out = _output()

    def toggle(self):
        self.value = not self.value
        self._out.set(self.value)

class gOutput():
    def __init__(self):
        self.value = False
        self._in = _input()

    def point(self, target):
        self._in.point(target)

    def update(self):
        self.value = self._in.fetch()
        print('update for {} with value {}'.format(self, self.value))