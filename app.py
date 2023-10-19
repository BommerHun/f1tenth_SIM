import sys
import rclpy
from rclpy.node import Node
from PyQt5.QtCore import QSize, Qt
from drive_bridge_msg.msg import InputValues
from std_msgs.msg import Float64
from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton
from PyQt5.QtWidgets import *
from PyQt5 import QtCore, QtGui
from PyQt5.QtGui import *
from PyQt5.QtCore import *
import sys

# Subclass QMainWindow to customize your application's main window
class ControlPublisher(Node):
    def __init__(self):
        super().__init__("control")
        self.command_pub = self.create_publisher(InputValues, "drive_bridge",1)
        print("inicializál")

class MainWindow(QMainWindow):

    def button_clicked(self):
        msg = InputValues()
        msg.delta = 0.1
        msg.d = 0.0
        try:
            self.node.command_pub.publish(msg)
            print("Message sent")
        except Exception as e:
            print(e)

    def keyPressEvent(self, event):
        if event.key() == Qt.Key_Up:
            print("Fel")
    def __init__(self):
        super().__init__()
        rclpy.init()
        self.node = ControlPublisher()
        self.setWindowTitle("My App")
        button = QPushButton("Press Me!")

        # Set the central widget of the Window.
        button.setText("Click me")
        self.setGeometry(200,200,300,300)
        self.b1 = QPushButton(self)
        self.b1.setText("Click me")
        self.b1.clicked.connect(self.button_clicked)

app = QApplication(sys.argv)
window = MainWindow()
window.show()
app.exec()
window.node.destroy_node()
print("Closing...")
