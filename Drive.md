### Motor Drive

#### ESP32 Pinout

![ESP32-Pinout](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/17a501bc-b486-40cf-b4f4-56b1d6ca5614)


#### NEMA 17 Stepper Motor

![image](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/7e7d9788-e3dc-4e75-84a9-cef0bf36b96a)


#### Stepper Motor Driver (A4988)

![image](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/6d8ec04e-bafa-46b3-aae7-457e1552c2d2)


#### Inertial Measurement Unit (MPU-6050)
![MPU6050-3-axis-Accelerometer-Gyroscope-Module-Pinout](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/d9d95a46-4402-45a8-b94b-53d8cc3b72aa)



#### Fundamentals of I2C Communication


#### NiMH Battery Pack Connection


#### FPGA (DE10-Lite) and Camera (D8M) Connection

Use the ribbon cable to connect your Camera module (D8M) to DE10-Lite FPGA. Check the FPGA folder for reference.

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
