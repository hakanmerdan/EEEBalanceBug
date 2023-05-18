### Motor Drive

#### ESP32 Pinout

ESP32 is a low-cost microcontroller that uses low power and equipped with WiFi ability. The pin connections of ESP32 are shown in below. 

![ESP32-Pinout](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/17a501bc-b486-40cf-b4f4-56b1d6ca5614)

ESP32 will be located on top of the FPGA cap that you are given and will be controlling the motors via stepper motor drivers A4988 and gyroscope/ accelerometer MPU-6050 with I2C communication.

#### NEMA 17 Stepper Motor

![image](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/7e7d9788-e3dc-4e75-84a9-cef0bf36b96a)


#### Stepper Motor Driver (A4988)

The A4988 has two different power supply connections as below:
**VMOT and GND:** To power up the motor and it can go up to 35V.
**VDD and GND:** To power the sensor internal logic circuitry, and it can be between 3.3V to 5V.
**1A, 1B, 2A and 2B** output pins are for the motor connection. Our motor NEMA-17 is a bipolar stepper motor which comes 4 wires and are connected to 1A, 1B, 2A and 2B output pins.
Stepper motor driver requires to use a heatsink as excessive power dissipation may damage the IC. Therefore, you are given heatsink for the motor drivers A4988.
To enable the driver, **RST** pin should be connected to **SLEEP** pin.
**DIR** and **STEP** pins are input controls pins. STEP controls the microsteps of the motor and DIR controls the direction of motor rotation.


![image](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/6d8ec04e-bafa-46b3-aae7-457e1552c2d2)

Before you run the motors, you must set the maximum current on the driver, so the current flow through the motor coils does not exceed the rated current.
You can set the current limit by adjusting the small trimmer potentiometer shown in below. 


![A4988-Current-Limiting-Potentiometer](https://github.com/hakanmerdan/EEEBalanceBug/assets/85967283/cc500b2e-9e38-44dd-be0b-cef6de5d2ef9)

After setting the current limit, you can finalise your connections and make your stepper motor ready to be plugged in your power supply. You are suggested to put a large 100μF capacitor between VMOT and GND to prevent large voltage spikes.

Sample Pin Connections are given below.

ESP32 and A4988 Connection

| ESP32 Cap Pin Number  | A4988	Pin Number | 
| ------------- | ------------- |
| PIN 10 | STEP  | 
| PIN 11 | DIR  | 
| 5V  | VDD| 
| GND| GND  |

| ESP32 Cap Pin Number  | MPU-6050 Pin Number | 
| ------------- | ------------- |
| SCA | SCA  | 
| SCL | SCA  | 
| 5V  | VDD| 
| GND| GND  |



After the connections made, you can test your motors with the sample code given in Github page in Test Codes folder.

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
