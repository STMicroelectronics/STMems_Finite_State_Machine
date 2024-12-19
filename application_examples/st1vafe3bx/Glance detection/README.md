## 1 - Introduction

Detect *glance* and *de-glance* gestures typically used in smartphone devices. The two gestures can be used to turn-on and turn-off the screen automatically. The example uses the accelerometer low-pass filtered data at 1 Hz using the *Machine Learning Core*.

The FSM processes data coming from the accelerometer, configured in ultra low-power mode at 25 Hz.

Overall current consumption is 11.4  µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

- FSM_OUTS1 register values
  - 20h = Glance gesture detected
  - 08h = De-glance gesture detected


## 4 - Interrupts

The configuration generates an interrupt on INT when a *glance* or a *de-glance* gesture is detected. Reading the FSM_OUTS1 register allows to determine the new state.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2024 STMicroelectronics**