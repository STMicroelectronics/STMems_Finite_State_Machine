## 1 - Introduction

This Finite State Machine (FSM) example enables the *Peak Tracking* suitable for detecting high-intensity impacts.

The FSM processes data coming from the high-g accelerometer, configured at 480 Hz.

Configurable parameters:

- Threshold 1: shock start threshold on high-g accelerometer norm signal [hg], default is 0.40 hg (that is 40 g)
- Threshold 2: shock end threshold on high-g accelerometer norm signal [hg], default is 0.39 hg (that is 39 g)

Overall current consumption is 260 µA.


## 2 - Device orientation

Any orientation.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 pin when the *Peak Tracking* stores the high-g accelerometer peak value in FIFO.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2025 STMicroelectronics**
