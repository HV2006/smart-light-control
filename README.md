#smart light control

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SOMISETTY HARSHA VARDHAN

*INTERN ID*: CTIS9701

*DOMAIN*: INTERNET OF THINGS

*DURATION*: 6 WEEKS

*MENTOR*: NEEELA SANTOSH

##YOU HAVE TO ENTER DISCRIPTION OF YOUR TASK (AND IT SHOULD NOT BE LESS THAN 500 WORDS) 

# Smart Light Control System Using Arduino and Mobile App

## Introduction

The Smart Light Control System is an IoT-based automation project designed to control an LED light wirelessly using a microcontroller and a mobile application. The project uses an Arduino board as the central controller and a Bluetooth communication module to establish a connection between the hardware and the smartphone. The main goal of the project is to create a working prototype where an LED responds instantly to commands sent from a mobile app, demonstrating the basic concept of smart home automation.

This system is simple, cost-effective, and easy to implement, making it suitable for students and beginners who want to learn embedded systems, wireless communication, and IoT technology. The LED used in the project represents a household light or electrical appliance that can be controlled remotely.

---

## Objective of the Project

The primary objective of this project is to design and implement a smart lighting system capable of controlling an LED using a smartphone. The project aims to:

* Enable wireless control of lights through a mobile application.
* Demonstrate communication between a microcontroller and a smartphone.
* Introduce IoT and automation concepts.
* Develop a functional and responsive prototype for smart home applications.

---

## Components Required

### Hardware Components

* Arduino Uno or Nano
* HC-05 Bluetooth module
* LED
* 220Ω resistor
* Breadboard
* Jumper wires
* USB cable
* Power supply

### Software Components

* Arduino IDE
* Android mobile application (Bluetooth Terminal or custom app)
* Embedded C/C++ programming language

---

## Working Principle

The Smart Light Control System works through wireless communication between the smartphone and the Arduino board. The HC-05 Bluetooth module is connected to the Arduino and acts as a communication interface. A mobile application sends commands such as “ON” and “OFF” through Bluetooth.

The Arduino continuously checks for incoming data from the Bluetooth module. When the user presses the ON button in the app, the app sends a command to the Arduino. The Arduino processes the command and turns the LED ON by setting the output pin HIGH. Similarly, when the OFF command is received, the Arduino turns the LED OFF by setting the output pin LOW.

This process allows real-time control of the LED using a smartphone without any physical switch.

---

## Circuit Description

The LED is connected to one of the Arduino digital output pins through a 220Ω resistor to protect it from excessive current. The negative terminal of the LED is connected to the ground pin.

The HC-05 Bluetooth module connections are:

* VCC → 5V
* GND → GND
* TX → RX
* RX → TX

The Bluetooth module receives commands from the mobile app and transfers them to the Arduino through serial communication.

---

## Software Implementation

The Arduino program is written using the Arduino IDE. The code initializes serial communication and configures the LED pin as an output. Inside the main loop, the Arduino reads Bluetooth data continuously. Based on the received command:

* “1” or “ON” → LED turns ON
* “0” or “OFF” → LED turns OFF

The mobile application provides a simple interface containing:

* Connect button
* LED ON button
* LED OFF button
* Status display

The app makes the system user-friendly and easy to operate.

---


## Applications

* Smart home lighting
* Remote appliance control
* Industrial automation

---

## Future Enhancements

The project can be improved by:

* Using Wi-Fi modules for internet control
* Adding voice assistant integration
* Controlling multiple devices simultaneously


#OUTPUT

<img width="1080" height="905" alt="Image" src="https://github.com/user-attachments/assets/51b93efa-e8e1-42f7-af77-e7aee3d0490e" />

<img width="1366" height="768" alt="Image" src="https://github.com/user-attachments/assets/14abbcee-798d-4f61-94c2-679135bcacfb" />

<img width="1366" height="768" alt="Image" src="https://github.com/user-attachments/assets/dc4f097e-1cef-4ba9-9a27-588d7e574edb" />
