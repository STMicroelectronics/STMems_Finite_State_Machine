## 1 - Introduction

This Finite State Machine (FSM) example implements the *pick-up* gesture typically used in mobile devices to signal the event of picking up the device from a table. It is typically used to automatically turn on some services.

The FSM processes data coming from the accelerometer, configured in low-power mode 3 at 30 Hz.

Configurable parameters:

- On table detection threshold, default is 0.9 g
- On table detection time, default is 3 s (90 samples)
- Pick-up detection threshold, default is 1.1 g

Overall current consumption is 15 µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when the *pick-up* gesture is detected.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2020 STMicroelectronics**

