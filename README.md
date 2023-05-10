# ELEC50008 - Engineering Design Project 2
## Project Brief: EEESegway
## Introduction

The Engineering Design Project 2 is one of the six modules that make up your second year of study. It brings together theoretical and practical content from your lectures and labs with important industrial skills relating to product design, project management and team working.

You will work in tutorial groups of 6 (2 EEE and 4 EIE) people to complete the project. It will be assessed with an interim interview, a final report, and a demo.

## Brief

You are requested to design and build a balancing robot (segway) that can autonomously map and navigate a maze. A prototype of the design must be built and tested in the artificial maze in the lab. The maze is laid out with light strips on an arena. The arena is coloured black and surrounded by black curtains.

![maze_1](https://github.com/hakanmerdan/EEESegway/assets/85967283/96d75358-97a4-448e-8e47-b80029e69f10)

The quality of the design will be assessed against the following criteria:
-	Is it possible to find and identify the obstacles?
-	Is the design cost and weight effective?
-	Is the segway good enough to maintain its balance?
-	Is the construction robust and reliable?
-	Is the remote-control interface logical and easy to use?


## Deliverables and Assessments

Date of submission: 20 June 2023 
The report is a formal documentation of all the technical and non-technical work you have done on the project. The report should justify all your design decisions and include test results of various aspects of your prototype. One team member should act as overall editor to ensure that the report is consistent in style and content.

Marks weighting: 40%

### Interim Presentation
**Date of assessment:  1 June 2023**

The interim presentation is an opportunity to show your progress mid-way through the project. You should prepare a presentation showing your high-level design, research and technical progress so far. You should also present a plan, e.g. Gantt chart, for the remaining task to complete the project.

Marks weighting: 20%

### Report
**Date of assessment:  20 June 2023**

The report is a formal documentation of all the technical and non-technical work you have done on the project. The report should justify all your design decisions and include test results of various aspects of your prototype. One team member should act as overall editor to ensure that the report is consistent in style and content.

Marks weighting: 40%

### Demo
**Date of assessment:  23 June 2023**

The demo is your opportunity to present your completed project. There are two parts to the demo:
1.	An assessment of your segway on the lab bench, where your examiner will ask to see different functional aspects and assess your theoretical understanding of the implementation.
2.	A test of your segway on the demonstration arena, where (DO EXPLAIN ARENA).

Marks weighting: 40%

## Getting started	.
### Balancing Robot (EEESegway) Kit

Your EEESegway has been designed to support modification for work on this project. The Orangepip will be replaced with an ARM-based microcontroller platform with a WiFi module, but you can continue to develop code using the Arduino framework and IDE.
The central PCB has connections for a motor driver module, which will simplify the challenge of steering and reversing your rover.

#### Robot Hardware

-	FPGA board (FPGA Max DE-10 lite)
-	Camera
-	WiFi microcontroller (ESP32)
-	Battery Pack 
-	Inertial measurement unit (MPU6050)
-	Stepper motors and drivers (NEMA-17 Stepper motor and A4988 Stepper Motor Drivers)

#### Connection and Structural Elements 

-	3D printed chassis and mounting sockets, parts.
-	Screws, nuts, spacers

		
### Sensing
You should use the outcome of your lab experiments to develop ideas for making sensors and analogue interfaces to detect the signals.
The EEEBug experiment showed you an example of an optical sensor.
The Passive Networks experiment (Autumn Term) introduces the concept of resonant circuits which, if the inductor is suitably constructed and orientated, will oscillate in the presence of radio waves of the correct frequency.
Magnetic sensors are not covered directly in the labs and you should carry out your own research in this area.
			
In certain cases you may wish to detect particular frequencies while blocking others, and you have explored to do this with passive and opamp-based circuits.
Some sensors will produce a weak signal that will need amplification.

Signals will need to be converted into the digital domain for transmission back to the rover operator.
Consider whether a binary input is sufficient, or you need to measure the voltage with more precision.
Research software libraries that can help you determine time-domain characteristics such as frequency or serial data encoding.
			
### Construction
Mechanical design is not a core component of the EEE/EIE degree so it is left to you to be innovative in the construction of your segway.
The given chassis is designed to be a useful platform but feel free to modify it, taking into account the budget and weight constraints.
			
You can download a computer-aided manufacturing (CAM) drawing of the chassis, which can be modified for reproduction in acrylic with a laser cutter.
Workshop facilities are available on arrangement with the lab technicians.
You may wish to consider 3D printing, though you will need to research and teach yourself the necessary techniques first.
3D printers are available to use with the help of the lab technicians.	

### Demo Environment

*** ***(NEED EXPLANATION AND PHOTO OF THE DEMO MAZE)


### New Skills

-	Project Management
-	Complex System Engineering
-	Top-Down Approach
-	Documentation
-	Group Work
-	Problem Solving

