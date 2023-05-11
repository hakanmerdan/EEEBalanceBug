### Motor Drive
####Stepper motor driver pinout:

The A4988 driver has a total of 16 pins that connect it to the outside world. The pinout is as follows:

![image](https://github.com/hakanmerdan/EEESegway/assets/85967283/0e95142c-ce6a-4958-b5af-35e0e32a3478)

####Power Pins:

![image](https://github.com/hakanmerdan/EEESegway/assets/85967283/daedb194-58b0-496c-8cbc-f96d4151f0a3)


VDD and GND are used to power the internal logic circuitry, which can range from 3V to 5.5V.
Whereas,
VMOT and GND supply power to the motor, which can range from 8V to 35V.
According to the datasheet, in order to sustain 4A, the motor supply requires a suitable decoupling capacitor close to the

Microstep Selection Pins:
The A4988 driver supports microstepping by dividing a single step into smaller steps. This is achieved by energizing the coils with intermediate current levels.


***[ONGOING]
