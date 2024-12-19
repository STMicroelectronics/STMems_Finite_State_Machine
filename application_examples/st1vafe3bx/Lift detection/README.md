## 1 - Introduction

This Finite State Machine (FSM) example implements the *lift* and the *de-lift* gestures typically used in laptop and convertible devices to signal the intention of the user to look at the device screen. It is typically used to automatically turn on and turn off the device screen. It uses the accelerometer sensor only.

The FSM processes data coming from the accelerometer, configured in ultra low-power mode at 25 Hz.

Overall current consumption is 10.5  µA.

## 2 - Device orientation

Any orientation is supported.


## 3 - Finite State Machine output values

- FSM_OUTS1 register values
  - 08h = De-lift gesture detected
  - 10h = Lift gesture on +Y accelerometer axis detected
  - 20h = Lift gesture on -Y accelerometer axis detected
  - 40h = Lift gesture on +X accelerometer axis detected
  - 80h = Lift gesture on -X accelerometer axis detected


## 4 - Interrupts

The configuration generates an interrupt on INT when moving from a *lift* condition to the *de-lift* condition and vice-versa. Reading the FSM_OUTS1 register allows to determine the new state.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2024 STMicroelectronics**