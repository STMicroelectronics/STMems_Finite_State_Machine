## 1 - Introduction

This Finite State Machine (FSM) example implements four *wrist navigation* gestures typically used in smartwatches to get around in the menu:

* The **push-down** gesture consists of holding your arm in front of you and quickly pushing down, then bringing it back normally to the original position.
* The **pivot-up** gesture consists of holding your arm in front of you and quickly pivoting up, then bringing it back normally to the original position.
* The **flick-out** gesture consists of quickly flicking your wrist away from you, then slowly turning it back towards you.
* The **flick-in** gesture consists of slowly turning your wrist away from you, then quickly flicking it back towards you.

This example combines four FSMs which process data coming from the accelerometer configured in low-power mode 1 at 60 Hz.

Every FSM implements one specific gesture:

* FSM #1 implements the *push-down* gesture for a device worn on the left wrist, or *pivot-up* gesture for a device worn on the right wrist
* FSM #2 implements the *pivot-up* gesture for a device worn on the left wrist, or *push-down* gesture for a device worn on the right wrist
* FSM #3 implements the *flick-out* gesture (same for a device worn on the left or right wrist)
* FSM #4 implements the *flick-in* gesture (same for a device worn on the left or right wrist)

Overall current consumption is 38 µA.


## 2 - Device orientation

ENU orientation is required.


## 3 - Finite State Machine output values

None.


## 4 - Interrupts

The configuration generates an interrupt on INT1 when any of the *wrist navigation* gestures is detected. The FSM_STATUS_MAINPAGE or FSM_STATUS register can be read in order to understand which FSM has generated the interrupt, and consequently the corresponding *wrist navigation* gesture.

------

**More Information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2024 STMicroelectronics**

