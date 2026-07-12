# Hardware

Welcome to the **CRAB-X Hardware** directory.

This folder contains everything required to build the physical robot, including the mechanical design, electronics, 3D printing resources, and assembly documentation.

CRAB-X is designed as an **affordable, modular, and open-source desktop robotic crab**, allowing students, makers, and robotics enthusiasts to build a capable quadruped using inexpensive, off-the-shelf components.

The hardware architecture emphasizes:

- Low-cost components
- Easy assembly
- Modular upgrades
- Beginner-friendly design
- Open-source development

---

# Directory Structure

| Folder | Description |
| ------- | ----------- |
| [bom](bom/README.md) | Complete Bill of Materials including electronics, mechanical parts, hardware, and recommended tools. |
| [cad](cad/README.md) | Fusion 360 source files, STEP models, and editable CAD files. |
| [printing](printing/README.md) | STL files, print settings, recommended orientations, and printing instructions. |
| [electronics](electronics/README.md) | Wiring diagrams, pin assignments, power distribution, and electrical documentation. *(Coming Soon)* |

---

# Hardware Overview

## Main Controller

- NodeMCU ESP8266

---

## Servo Controller

- PCA9685 16-Channel PWM Servo Driver

---

## Actuation

- 8 × MG90S Metal Gear Servo Motors
- 8 Degrees of Freedom (8-DOF)

---

## Display

- 0.96" SSD1306 OLED Display (I²C)

Used for:

- Robot expressions
- Status display
- Boot animation
- Error messages

---

## Power System

- 2 × 18650 Li-ion Cells (2S)
- 2S Battery Holder
- 2S BMS Protection Board
- LM2596 Buck Converter
- Rocker/Slide Power Switch

---

## Mechanical Design

- Fully 3D Printed Chassis
- Modular Leg Assemblies
- Replaceable Servo Mounts
- Lightweight Structure
- Easy Maintenance

---

# Design Philosophy

CRAB-X has been designed around four core principles:

### Affordable

Uses inexpensive and widely available electronic components.

### Modular

Every major component can be replaced or upgraded without redesigning the robot.

### Open Source

All CAD files, firmware, documentation, and STL models are publicly available.

### Beginner Friendly

No custom PCB or advanced manufacturing techniques are required.

---

# Build Workflow

Follow this order when building CRAB-X.

## Step 1 — Print Components

Print every required part from the **printing** directory using the recommended printer settings.

Recommended material:

- PLA
- PLA+

---

## Step 2 — Prepare Electronics

Collect all required components using the **Bill of Materials**.

This includes:

- Servo motors
- Controller
- Servo driver
- Battery
- Power electronics
- Hardware

---

## Step 3 — Mechanical Assembly

Assemble:

- Main body
- Servo mounts
- Leg assemblies
- Battery holder
- OLED mount

Verify that all moving joints rotate freely.

---

## Step 4 — Electrical Assembly

Install:

- NodeMCU
- PCA9685
- OLED
- Battery holder
- LM2596
- Power switch

Route all wiring neatly before securing components.

---

## Step 5 — Wiring Verification

Before powering the robot:

- Verify battery polarity.
- Verify LM2596 output voltage.
- Check servo orientation.
- Confirm I²C wiring.
- Ensure all grounds are connected.

---

## Step 6 — Upload Firmware

Upload the latest firmware using Arduino IDE.

After uploading:

- Calibrate servos
- Verify OLED operation
- Test every joint
- Perform first boot

---

# Required Tools

- Phillips Screwdriver Set
- Precision Screwdrivers
- Soldering Iron
- Solder Wire
- Wire Stripper
- Flush Cutter
- Digital Multimeter
- Hot Glue Gun *(Optional)*
- Tweezers
- Zip Ties

---

# Future Hardware Expansion

CRAB-X V1 has been designed to support future upgrades without major redesigns.

Possible upgrades include:

- ESP32 Controller
- ESP32-CAM
- Bluetooth Control
- Wi-Fi Dashboard
- MPU6050 IMU
- Ultrasonic Sensor
- ToF Distance Sensor
- RGB Status LEDs
- Buzzer
- Gesture Control
- Voice Control

---

# Hardware Specifications

| Feature | Specification |
|----------|---------------|
| Robot Type | Desktop Quadruped Robotic Crab |
| Degrees of Freedom | 8 |
| Controller | NodeMCU ESP8266 |
| Servo Driver | PCA9685 |
| Servo Motors | 8 × MG90S Metal Gear |
| Display | 0.96" OLED SSD1306 |
| Power Supply | 2×18650 (2S) |
| Voltage Regulation | LM2596 |
| Manufacturing | FDM 3D Printing |

---

# Repository Structure

```text
hardware/

├── bom/
├── cad/
├── printing/
└── electronics/
```

---

# Related Documentation

- [Bill of Materials](bom/README.md)
- [3D Printing Guide](printing/README.md)
- [CAD Files](cad/README.md)
- [Build Guide](../docs/build-guide/README.md)
- [Firmware](../firmware/README.md)

---

> [!TIP]
> Before assembling the complete robot, print and test **one leg assembly** with its servo to verify tolerances and fitment. This helps avoid wasting print time and material if adjustments are needed.

---

> [!NOTE]
> CRAB-X is an evolving open-source robotics platform. Future hardware revisions may introduce new features, improved locomotion, enhanced power management, and additional autonomous capabilities while maintaining compatibility with the original design whenever possible.

---

Happy Building! 🦀🤖
