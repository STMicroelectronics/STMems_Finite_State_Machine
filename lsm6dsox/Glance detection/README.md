## 1 - Introduction

Detect *glance* and *de-glance* gestures typically used in smartphone devices. The two gestures can be used to turn-on and turn-off the screen automatically. The example uses the accelerometer sensor filtered using the *Machine Learning Core*.

The configuration runs at 26 Hz.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

- FSM_OUTS1 register values
  - 20h = Glance gesture detected
  - 08h = De-glance gesture detected


## 4 - Interrupts

The configuration generates an interrupt on INT1 when a *glance* or a *de-glance* gesture is detected. Reading the FSM_OUTS1 (4Ch) register allows to determine the new state.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright (C) 2019 STMicroelectronics**