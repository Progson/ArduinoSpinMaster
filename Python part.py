import serial
import rotatescreen

                            #Set port to the one you plugged the device to.
serialPort = serial.Serial(port= "COM3", baudrate= 9600, bytesize=8, timeout=2, stopbits=serial.STOPBITS_ONE)
screen = rotatescreen.get_secondary_displays()
screen[0].set_landscape()

while 1:
    if serialPort.in_waiting > 0:
        code = serialPort.readline().decode('utf-8')
        if(code[0] == "1"):
            screen[0].set_landscape()
        if(code[0] == "2"):
            screen[0].set_portrait()
