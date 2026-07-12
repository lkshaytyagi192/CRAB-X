# 🦀 CRAB-X Firmware

The CRAB-X firmware controls every aspect of the robot, including locomotion, servo coordination, OLED animations, and future autonomous capabilities.

Built on the Arduino framework, the firmware is designed to be lightweight, modular, and easy to extend. Each subsystem is separated into individual files, making development and debugging significantly easier.

Whether you're building your first walking robot or experimenting with embedded robotics, this firmware provides a clean foundation for future upgrades.

---

# Features

Current firmware supports:

- 8 DOF Walking Robot
- Quadruped Crab Gait
- PCA9685 Servo Driver
- OLED Face Animations
- Smooth Motion Interpolation
- Servo Calibration
- Multiple Robot Poses
- Low Power Embedded Design

Upcoming versions will include:

- Bluetooth Remote Control
- Smartphone App
- Gesture Control
- Obstacle Avoidance
- Autonomous Navigation
- Computer Vision
- ESP32 Upgrade
- Voice Interaction

---

# Firmware Architecture

The firmware follows a modular architecture.

```
                +----------------+
                |   CRAB-X.ino   |
                +--------+-------+
                         |
        +----------------+----------------+
        |                |                |
        |                |                |
   Movement         OLED Display      Power
        |                |                |
        |                |                |
 Servo Driver       Face Engine     Battery Monitor
        |
   PCA9685 Driver
        |
    MG90S Servos
```

Each subsystem is isolated inside its own source file.

This makes adding new hardware or implementing new walking algorithms significantly easier.

---

# Folder Structure

```
firmware/

CRAB-X.ino

config.h

movement.h

animations.h

faces.h

display.h

servo_controller.h

calibration.h

power.h

utils.h
```

---

# Hardware Requirements

CRAB-X V1 firmware is designed for the following hardware.

| Component | Quantity |
|-----------|---------:|
| NodeMCU ESP8266 | 1 |
| PCA9685 Servo Driver | 1 |
| MG90S Servo | 8 |
| SSD1306 OLED Display | 1 |
| 2S Li-ion Battery | 1 |
| LM2596 Buck Converter | 1 |

---

# Development Environment

Recommended software:

- Arduino IDE 2.x
- ESP8266 Board Package
- USB Driver (CH340 or CP2102)
- Serial Monitor (115200 baud)

Operating Systems:

- Windows
- Linux
- macOS

---

# Installing ESP8266 Board Package

Open Arduino IDE.

Navigate to

Tools → Board → Boards Manager

Search

ESP8266

Install

ESP8266 by ESP8266 Community

After installation select

Tools

↓

Board

↓

NodeMCU 1.0 (ESP-12E Module)

---

# Required Libraries

Install the following libraries using the Arduino Library Manager.

Required:

• Adafruit PWM Servo Driver Library

• Adafruit SSD1306

• Adafruit GFX

• Wire

Optional:

• EEPROM

• ServoEasing

Always install the latest stable versions.

---

# Flashing the Firmware

1. Connect NodeMCU using USB.

2. Open

CRAB-X.ino

3. Select

NodeMCU 1.0

4. Select correct COM Port.

5. Click Upload.

Compilation takes approximately 20–40 seconds.

After uploading, open the Serial Monitor at

115200 baud

to verify successful initialization.
