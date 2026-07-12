# Hardware

Welcome to the **CRAB-X Hardware** directory.

This directory contains all mechanical, electrical, and manufacturing resources required to build **CRAB-X**, an affordable open-source desktop robotic crab.

CRAB-X V1 is designed around **widely available, low-cost components** while maintaining a modular architecture for future upgrades.

---

# Hardware Version

| Specification | Value |
|--------------|-------|
| Robot | CRAB-X |
| Version | V1.0 |
| Degrees of Freedom | 8 DOF |
| Controller | NodeMCU ESP8266 |
| Servo Driver | PCA9685 |
| Display | SSD1306 OLED |
| Power | 2×18650 Li-ion (2S) |

---

# Repository Structure

| Folder | Description |
| ------- | ----------- |
| [bom](bom/README.md) | Complete Bill of Materials |
| [cad](cad/README.md) | Fusion 360 source files, STEP models, and CAD files |
| [printing](printing/README.md) | STL files and 3D printing guide |
| [electronics](electronics/README.md) | Wiring diagrams and electrical documentation *(Coming Soon)* |

---

# Hardware Specifications

## Main Controller

- NodeMCU ESP8266 Development Board

Responsible for:

- Robot control
- Motion sequencing
- OLED animations
- Communication with the PCA9685

---

## Servo Driver

- PCA9685 16-Channel PWM Servo Driver

Provides:

- Stable PWM generation
- I²C communication
- Independent servo control
- Reduced processor load

---

## Motion System

- 8 × MG90S Metal Gear Servo Motors

Configuration:

- Front Left Leg
- Front Right Leg
- Rear Left Leg
- Rear Right Leg

Each leg uses:

- Hip Servo
- Knee Servo

Total:

**8 Degrees of Freedom**

---

## Display

- 0.96" SSD1306 OLED Display

Used for:

- Facial expressions
- Startup animation
- Status information
- Error messages
- Idle animations

---

## Power System

CRAB-X V1 is powered using:

- 2 × 18650 Li-ion Cells
- 2S Battery Holder
- 2S BMS Protection Board
- LM2596 Buck Converter
- Rocker/Slide Power Switch

The LM2596 should be adjusted to approximately **5.5–6.0V** before connecting the electronics.

---

## Mechanical Design

Features:

- Fully 3D Printed Chassis
- Lightweight Body
- Modular Leg Assemblies
- Easy Servo Replacement
- Hidden Cable Routing
- Compact Desktop Form Factor

---

# Build Workflow

Follow these steps when building CRAB-X.

## Step 1 — Print Parts

Print all STL files using the recommended settings from the Printing Guide.

Recommended material:

- PLA
- PLA+

---

## Step 2 — Prepare Electronics

Gather all components listed in the Bill of Materials.

Install:

- NodeMCU
- PCA9685
- OLED
- LM2596
- Battery Holder
- Power Switch

---

## Step 3 — Assemble the Robot

Assemble:

- Main Body
- Leg Assemblies
- Servo Mounts
- Battery Holder
- OLED Mount

Ensure every joint moves freely.

---

## Step 4 — Complete Wiring

Connect:

- Servo Motors
- OLED Display
- PCA9685
- Power System

Before powering the robot:

- Verify battery polarity
- Verify servo polarity
- Verify I²C wiring
- Verify LM2596 output voltage
- Check for short circuits

---

## Step 5 — Upload Firmware

Upload the latest firmware using Arduino IDE.

After uploading:

- Calibrate servos
- Test OLED
- Test every leg
- Verify walking motion

---

# Required Tools

- Phillips Screwdriver
- Precision Screwdriver Set
- Soldering Iron
- Solder Wire
- Wire Stripper
- Flush Cutter
- Digital Multimeter
- Tweezers
- Hot Glue Gun *(Optional)*
- Zip Ties

---

# Design Philosophy

CRAB-X has been designed around five principles.

### Affordable

Uses inexpensive off-the-shelf components.

### Open Source

Complete CAD files, firmware, and documentation are publicly available.

### Modular

Every subsystem can be upgraded independently.

### Repairable

Servo motors and electronics are easy to replace.

### Beginner Friendly

No custom PCB is required.

---

# Future Hardware Upgrades

The modular architecture allows CRAB-X to evolve into more advanced versions.

Possible future upgrades:

- ESP32 Development Board
- ESP32-S3
- ESP32-CAM
- Bluetooth Control
- Wi-Fi Dashboard
- OTA Firmware Updates
- MPU6050 IMU
- Ultrasonic Sensor
- ToF Sensor
- RGB LEDs
- Buzzer
- Voice Control

---

# Directory Overview

```text
hardware/

├── bom/
│   └── README.md

├── cad/
│   └── README.md

├── printing/
│   └── README.md

└── electronics/
    └── README.md
```

---

# Related Documentation

- [Bill of Materials](bom/README.md)
- [3D Printing Guide](printing/README.md)
- [CAD Files](cad/README.md)
- [Firmware](../firmware/README.md)
- [Build Guide](../docs/build-guide/README.md)

---

> [!TIP]
> Print and assemble **one complete leg** before printing the full robot. This allows you to verify servo fitment, screw alignment, and motion before committing to the complete build.

---

> [!NOTE]
> CRAB-X V1 is intended as an affordable educational robotics platform. Future hardware revisions will introduce additional capabilities while preserving compatibility with the original design whenever possible.

---

Happy Building! 🦀🤖
