# importing the requests library
import requests
import time
from threading import Timer
import os


# defining a params dict for the parameters to be sent to the API
righton = 'http://192.168.4.1/righton'
rightoff = 'http://192.168.4.1/rightoff'
lefton = 'http://192.168.4.1/lefton'
leftoff = 'http://192.168.4.1/leftoff'
URL = "http://192.168.4.1/"





def left_on():
    requests.post(lefton)
    print("Left On")


def right_on():
    requests.post(righton)
    print("Right On")


def left_off():
    requests.post(leftoff)
    print("Left Off")


def right_off():
    requests.post(rightoff)
    print("Right Off")


def cleanup():
    left_off()
    right_off()
    print("End")


os.system("open -a VLC demo_video.mp4")

t1 = Timer(19.2, left_on)
t2 = Timer(21, left_off)

t3 = Timer(22.2, right_on)
t4 = Timer(24, right_off)

t5 = Timer(25, left_on)
t6 = Timer(26, left_off)

t7 = Timer(26, right_on)
t8 = Timer(27, right_off)

t9 = Timer(27, left_on)
t10 = Timer(28, left_off)

t11 = Timer(28, right_on)
t12 = Timer(29, right_off)

t13 = Timer(29, left_on)
t14 = Timer(30, left_off)

t15 = Timer(30, right_on)
t16 = Timer(31, right_off)

t17 = Timer(32, left_on)
t18 = Timer(33, left_off)

t19 = Timer(33, right_on)
t20 = Timer(34, right_off)

t21 = Timer(34, left_on)
t22 = Timer(35, left_off)

t23 = Timer(35, right_on)
t24 = Timer(36, right_off)

t25 = Timer(36, left_on)
t26 = Timer(38, left_off)

t27 = Timer(40, cleanup)

requests.get('http://192.168.4.1/')
print("response from root")
time.sleep(.4)

t1.start()
t2.start()
t3.start()
t4.start()
t5.start()
t6.start()
t7.start()
t8.start()
t9.start()
t10.start()
t11.start()
t12.start()
t13.start()
t14.start()
t15.start()
t16.start()
t17.start()
t18.start()
t19.start()
t20.start()
t21.start()
t22.start()
t23.start()
t24.start()
t25.start()
t26.start()
t27.start()

