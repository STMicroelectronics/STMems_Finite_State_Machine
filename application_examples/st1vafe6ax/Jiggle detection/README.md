## 1 - Introduction

Simple *jiggle* gesture (similar to a shake) example for wrist-worn devices. The gesture is detected when the accelerometer Z-axis is pointing up and the user is shaking the device along the Y-axis (accelerometer data low-pass  filtered at 1 Hz using the *Machine Learning Core*).

The configuration runs at 30 Hz.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when the *jiggle* gesture is detected.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2024 STMicroelectronics**