import os
import sys
from ui_interface import *
#from Custom_Widgets.Widgets import *
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5.QtCore import QSettings

settings = QSettings()

class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        QMainWindow.__init__(self)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        #loadJsonStyle(self, self.ui)

        self.show()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
