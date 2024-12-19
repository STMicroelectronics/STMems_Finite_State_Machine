## 1 - Introduction

This Finite State Machine (FSM) example implements the *flip-up* gesture typically used in mobile devices to signal the event of flipping the device up when it is facing down on a table. It is typically used to automatically turn on the device screen.

The FSM processes data coming from the accelerometer, configured in low-power mode 1 at 30 Hz.

Configurable parameters:

- Face-down on table detection threshold, default is -0.9 g (z-axis)
- Face-down on table detection time, default is 0.8 s (24 samples)
- Flip-up detection thresholds, defaults are 0.3 g (x-axis) and 0.8 g (z-axis)
- Flip-up detection time, default is 4 s (120 samples)

Overall current consumption is 17  µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when the *flip-up* gesture is detected.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2024 STMicroelectronics**

