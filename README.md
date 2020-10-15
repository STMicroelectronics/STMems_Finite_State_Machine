## Finite State Machine

This repository provides information, examples and configurations of the **Finite State Machine** (FSM) feature available in some products in the [**ST sensors portfolio**](https://www.st.com/en/mems-and-sensors.html?sc=MEMS). 

Finite State Machine processing allows moving some algorithms from the application processor to the *STMicroelectronics* sensor, enabling consistent reduction of power consumption. The sensor can be configured to detect user-defined motion patterns.

A Finite State Machine is a mathematical abstraction used to design logic connections. It is a behavioral model composed of a finite number of states and transitions between states, similar to a flowchart in which it is possible to inspect the way logic runs when certain conditions are met. The state machine begins with a *Start* state, goes to different states through transitions dependent on the inputs, and finally ends in a specific state (called *Stop* state). The current state is determined by the past states of the system.

The results of the Finite State Machine can be read from the application processor at any time. Furthermore, there is the possibility to **generate an interrupt** when a user-defined motion patterns is detected.


## Repository overview

This repository is structured as follows:  

- An [application_examples](./application_examples/) folder, containing examples of applications ready to be used with the sensor.
- A [configuration_examples](./configuration_examples/) folder, containing examples of configurations using different ST hardware and software tools.

------

**More information: [http://www.st.com](http://st.com/MEMS)**

**Copyright © 2020 STMicroelectronics**

