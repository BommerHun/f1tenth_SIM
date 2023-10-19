import sys
from PyQt5.QtWidgets import QApplication, QWidget, QHBoxLayout, QVBoxLayout, QLabel, QShortcut
from PyQt5.QtCore import Qt, QPoint
from PyQt5.QtGui import QKeySequence
##ROS2 importok:
import rclpy
from drive_bridge_msg.msg import InputValues
from std_msgs.msg import Float64
from rclpy.node import Node
class ControlPublisher(Node):
    def __init__(self):
        super().__init__("control")
        self.command_pub = self.create_publisher(InputValues, "drive_bridge",1)
        print("control node inicializalva")


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.kerekallas = 0.5
        print("IKSZDÉ töltés")
        rclpy.init()
        self.node = ControlPublisher()
        self.window_width, self.window_height = 1200, 800
        self.setMinimumSize(self.window_width, self.window_height)

        self.label = QLabel(self)
        self.label.setText('Lusta vagyok ezt törölni :)')
        self.label.move(150, 150)

        QShortcut(QKeySequence(Qt.Key_Left), self, activated=self.move_left)
        QShortcut(QKeySequence(Qt.Key_Right), self, activated=self.move_right)
        QShortcut(QKeySequence(Qt.Key_Up), self, activated=self.move_up)
        QShortcut(QKeySequence(Qt.Key_Down), self, activated=self.move_down)

    def move_left(self):

        if self.kerekallas > 0.5:
            self.label.setText("egyenes")
            self.kerekallas = 0.5
            msg = InputValues()
            msg.delta = 0.5
            msg.d = 0.0
        else:
            self.label.setText("balra")
            self.kerekallas = 0.1
            msg = InputValues()
            msg.delta = 0.1
            msg.d = 0.0
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )

    def move_right(self):

        if self.kerekallas < 0.5:
            self.label.setText("egyenes")
            self.kerekallas = 0.5
            msg = InputValues()
            msg.delta = 0.5
            msg.d = 0.0
        else:
            self.label.setText("jobbra")
            self.kerekallas = 0.9
            msg = InputValues()
            msg.delta = 0.9
            msg.d = 0.0
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )

    def move_up(self):
        self.label.setText("elore")
        msg = InputValues()
        msg.delta = self.kerekallas
        msg.d = 0.05
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )
        ##self.node.get_logger().info('Publishing: "%s"' % msg.delta)

    def move_down(self):
        self.label.setText("hatra")
        msg = InputValues()
        msg.delta = self.kerekallas
        msg.d = 0.05
        self.node.command_pub.publish(msg)
        print("Puslishing: ", msg.delta, " ", msg.d )


if __name__ == '__main__':
    # don't auto scale when drag app to a different monitor.
    # QApplication.setAttribute(Qt.HighDpiScaleFactorRoundingPolicy.PassThrough)

    app = QApplication(sys.argv)
    app.setStyleSheet('''
        QWidget {
            font-size: 45px;
        }
    ''')

    myApp = MyApp()
    myApp.show()

    try:
        sys.exit(app.exec_())
    except SystemExit:
        print('Closing Window...')
