## 1 - Introduction

Detect *motion* and *stationary* states of the device. The example uses the accelerometer sensor.

The FSM processes data coming from the accelerometer, configured in ultra low-power mode at 25 Hz.

Overall current consumption is 10.4  µA.


## 2 - Device orientation

Any orientation.


## 3 - Finite State Machine output values

- FSM_OUTS1 register values
  - 00h = Stationary state detected
  - 01h = Motion state detected


## 4 - Interrupts

The configuration generates an interrupt on INT when a *motion* or a *stationary* event is detected. The *motion* interrupt is generated when the device is in *stationary* state and it is moved. The *stationary* interrupt is generated when the device is in *motion* state and it is still for 5 seconds. Reading the FSM_OUTS1 register allows to determine the new state.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2024 STMicroelectronics**