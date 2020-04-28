import sys
from PyQt5.QtWidgets import QApplication
from main import mainWindow
app = QApplication([])
window = mainWindow()
window.show()
sys.exit(app.exec())