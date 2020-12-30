import serial
import time as t
import pyautogui as ui
dataRec=[b'2',b'3',b'4',b'5',b'6',b'7',b'8',b'9',b'10',b'11']
task=["esc","m","space","left","right","f","down","up","v","b"]
ser=serial.Serial("com5","9600")
while(True):
    b=ser.readline()
    c=b.split()
    d=c[0]
    if(c[0]== b'1'):
        ui.hotkey('alt','f4')
    for i in range(len(dataRec)):
        if(c[0]==dataRec[i]):
            c1=task[i]
            ui.keyDown(c1)            
