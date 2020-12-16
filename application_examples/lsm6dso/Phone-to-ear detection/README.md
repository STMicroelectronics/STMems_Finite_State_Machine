## 1 - Introduction

This Finite State Machine (FSM) example implements the *phone-to-ear* gesture typically used in mobile devices to detect the device approaching the user's ear when answering a phone call. It is typically used to automatically turn off the device screen.

The FSM processes data coming from both the accelerometer and gyroscope, configured in low-power mode at 26 Hz.

Configurable parameters:

- Angular rate to start / stop gyroscope integration, default is 0.175 rad/s
- Rotation angle around x-axis, default is about 45 degrees (0.8 rad/s)
- Accelerometer threshold on x-axis, default is 0.5 g
- Accelerometer x-axis check time, default is 154 ms (4 samples)

Overall current consumption is 275 µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when the *phone-to-ear* gesture is detected.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2020 STMicroelectronics**
