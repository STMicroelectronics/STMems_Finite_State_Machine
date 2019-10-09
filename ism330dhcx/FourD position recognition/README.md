## 1 - Introduction

Simple example of 4D position recognition. The example uses the accelerometer X and Y axes to determine portrait (up or down) and landscape (left or right) orientation.

The configuration runs at 26 Hz.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

- FSM_OUTS1 register values
  - 00h = N/A
  - 10h = Y-axis pointing down (portrait, down)
  - 20h = Y-axis pointing up (portrait, up)
  - 40h = X-axis pointing down (landscape, right)
  - 80h = X-axis pointing up (landscape, left)


## 4 - Interrupts

The configuration generates an interrupt on INT1 when a change in the orientation is detected. Reading the FSM_OUTS1 (4Ch) register allows to determine the new orientation.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2019 STMicroelectronics**