## 1 - Introduction

Simple *jiggle* gesture (similar to a shake) example for wrist-worn devices. The gesture is detected when the accelerometer Z-axis is pointing up and the user is shaking the device along the Y-axis (accelerometer data low-pass  filtered at 1 Hz using the *Machine Learning Core*).

The FSM processes data coming from the accelerometer, configured in ultra low-power mode at 25 Hz.

Overall current consumption is 11.5  µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when the *jiggle* gesture is detected.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2023 STMicroelectronics**