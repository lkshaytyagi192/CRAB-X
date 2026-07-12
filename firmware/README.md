# 🦀 CRAB-X Firmware

Firmware for the **CRAB-X Bio-Inspired Robotic Crab**.

This firmware controls the robot's movement, OLED display, servo calibration, and future autonomous capabilities using a **NodeMCU ESP8266**, **PCA9685 Servo Driver**, and **SSD1306 OLED Display**.

---

# Hardware

- NodeMCU ESP8266
- PCA9685 Servo Driver
- 8 × MG90S Metal Gear Servos
- SSD1306 0.96" OLED Display
- 2S Li-ion Battery (7.4V)
- LM2596 Buck Converter

---

# Features

✔ 8 Servo Walking Robot

✔ OLED Animated Faces

✔ Servo Calibration System

✔ Modular Firmware Architecture

✔ Smooth Walking Animations

✔ Expandable Sensor Support

✔ Future WiFi Remote Control

✔ Open Source

---

# Folder Structure

```
firmware/

│── CRAB-X.ino
│── config.h
│── servo_controller.h
│── calibration.h
│── display.h
│── faces.h
│── movement.h
│── animations.h
│── utils.h
│── README.md
```

---

# Firmware Modules

## config.h

Stores all configurable parameters.

- Servo Pins
- OLED Address
- Servo Limits
- Motion Parameters

---

## servo_controller.h

Controls the PCA9685 servo driver.

Functions include:

- Servo Initialization
- Smooth Servo Movement
- Angle Conversion

---

## calibration.h

Stores and loads servo offsets.

Allows every servo to be individually calibrated.

---

## display.h

Controls the OLED display.

Features:

- Initialization
- Text Rendering
- Bitmap Rendering
- Status Screens

---

## faces.h

Contains all robot facial expressions.

Examples:

- Happy
- Neutral
- Angry
- Sleep
- Blink

---

## animations.h

Controls OLED animations.

Examples:

- Idle
- Blink
- Happy Animation
- Wake Up

---

## movement.h

Contains all robot movements.

Examples:

- Stand
- Sit
- Walk Forward
- Walk Backward
- Rotate Left
- Rotate Right
- Dance
- Wave

---

## utils.h

Utility functions used throughout the project.

Examples:

- Delay Helpers
- Mapping Functions
- Debug Printing
- EEPROM Utilities

---

# Power

Battery

7.4V Li-ion (2S)

↓

Buck Converter (5V)

↓

PCA9685 + Servos

↓

NodeMCU (VIN)

---

# Development Roadmap

### Version 1

- Walking
- OLED Faces
- Servo Calibration

### Version 2

- WiFi Remote Control
- Web Dashboard
- OTA Updates

### Version 3

- Ultrasonic Sensor
- IMU
- Battery Monitoring

### Version 4

- ESP32-CAM Vision
- Object Tracking
- AI Integration

---

# Required Libraries

Install these libraries from the Arduino IDE Library Manager:

- Adafruit PWM Servo Driver
- Adafruit SSD1306
- Adafruit GFX
- EEPROM

---

# Upload Settings

Board:

NodeMCU 1.0 (ESP-12E Module)

Baud Rate:

115200

Flash Frequency:

80 MHz

Upload Speed:

115200

---

# License

MIT License

---

# Author

Lakshay Tyagi

CRAB-X is an open-source robotics project designed for learning, embedded systems development, and bio-inspired robotics research.

Happy Building! 🦀🤖
