## 1 - Introduction

This Finite State Machine (FSM) example implements the *wrist-tilt* gesture typically used in wrist worn devices to signal the intention of the user to look at the device screen. It is typically used to automatically turn on the device screen.

The FSM processes data coming from accelerometer, configured in ultra-low-power mode at 26 Hz.

The configuration supports both left and right wrist worn cases.

Configurable parameters:

- Wrist-tilt angle, default is 10 degrees (0.174 g)
- Wrist-tilt time, default is 230 ms  (6 samples)
- De-wrist-tilt time, default is 500 ms (13 samples)

Overall current consumption is 10  µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when the *wrist-tilt* gesture is detected.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2020 STMicroelectronics**

