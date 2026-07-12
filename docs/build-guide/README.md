# 🦀 CRAB-X Build Guide

Welcome to the official build guide for **CRAB-X**, a bio-inspired quadruped robotic crab designed for learning embedded systems, robotics, and autonomous locomotion.

This guide walks you through the complete assembly process, from 3D printed parts to the first successful walk.

---

# Table of Contents

- Overview
- Required Components
- Required Tools
- Assembly Overview
- Step 1 — Print All Parts
- Step 2 — Install Servo Motors
- Step 3 — Assemble the Legs
- Step 4 — Build the Chassis
- Step 5 — Install Electronics
- Step 6 — Wire Everything
- Step 7 — Power System
- Step 8 — Upload Firmware
- Step 9 — Servo Calibration
- Step 10 — First Power-On
- Step 11 — Walking Test
- Troubleshooting
- Future Upgrades

---

# Overview

CRAB-X is an open-source robotic crab powered by:

- NodeMCU ESP8266
- PCA9685 Servo Driver
- 8 × MG90S Metal Gear Servos
- SSD1306 OLED Display
- 2S Li-ion Battery
- LM2596 Buck Converter

The robot uses eight servos to achieve stable walking while displaying animated expressions on its OLED display.

---

# Required Components

Before beginning, ensure you have all required components listed in the Hardware Bill of Materials (BOM).

Required hardware includes:

- NodeMCU ESP8266
- PCA9685 Servo Driver
- 8 MG90S Servo Motors
- OLED Display
- Battery Pack
- Buck Converter
- Wiring
- Screws
- Heat Shrink
- Power Switch

---

# Required Tools

- Phillips Screwdriver
- Soldering Iron
- Solder Wire
- Wire Stripper
- Flush Cutter
- Hot Glue Gun (Optional)
- Multimeter
- Allen Keys

---

# Assembly Overview

Build the robot in the following order:

```
Print Parts
      ↓
Install Servos
      ↓
Assemble Legs
      ↓
Build Chassis
      ↓
Install Electronics
      ↓
Complete Wiring
      ↓
Upload Firmware
      ↓
Calibrate Servos
      ↓
Walking Test
```

---

# Step 1 — Print All Parts

Print every STL file located inside:

```
hardware/printing/
```

Recommended print settings:

Material

- PLA
- PETG (Optional)

Layer Height

0.2 mm

Infill

20%

Nozzle

0.4 mm

Supports

Only where indicated in the Printing Guide.

---

# Step 2 — Install Servo Motors

Install all eight MG90S servo motors into their designated mounting positions.

During installation:

- Do not overtighten screws.
- Ensure servo wires face inward.
- Route cables through cable channels.
- Leave enough cable slack for movement.

Do not install servo horns yet.

---

# Step 3 — Assemble the Legs

Attach all leg components to the servo horns.

Verify:

- Free movement
- No interference
- Smooth rotation
- Secure fasteners

Each leg should move without binding.

---

# Step 4 — Build the Chassis

Install:

- Internal frame
- Top cover
- Bottom cover
- Electronics mounts
- Battery holder

Ensure every printed component fits correctly before tightening all screws.

---

# Step 5 — Install Electronics

Mount:

- NodeMCU ESP8266
- PCA9685 Servo Driver
- OLED Display
- LM2596 Buck Converter
- Power Switch

Use spacers or standoffs where required.

Avoid allowing the PCB to contact the printed chassis directly.

---

# Step 6 — Complete Wiring

Connect:

### Servos

Servo Signal → PCA9685

Servo Power → 5V

Servo Ground → GND

---

### OLED

VCC → 3.3V

GND → GND

SCL → D1 (GPIO5)

SDA → D2 (GPIO4)

---

### PCA9685

VCC → 3.3V

GND → GND

SCL → D1

SDA → D2

Servo Power → 5V Buck Output

---

### NodeMCU

Powered from:

VIN ← 5V Buck Output

Never power the servos directly from the NodeMCU.

---

# Step 7 — Power System

Battery

↓

Power Switch

↓

2S BMS

↓

LM2596 Buck Converter

↓

5V Output

↓

PCA9685 + NodeMCU

Adjust the LM2596 output to exactly **5.0V** before connecting any electronics.

---

# Step 8 — Upload Firmware

Open:

```
firmware/CRAB-X.ino
```

Select:

Board

```
NodeMCU 1.0 (ESP-12E Module)
```

Upload Speed

```
115200
```

Flash Frequency

```
80 MHz
```

Compile and upload the firmware.

---

# Step 9 — Servo Calibration

Before walking:

Run calibration mode.

Adjust every servo until all legs are perfectly symmetrical.

Save the calibration offsets.

Correct calibration is essential for stable walking.

---

# Step 10 — First Power-On

After assembly:

- Check wiring polarity
- Verify battery voltage
- Confirm 5V output
- Inspect for short circuits

Power on the robot.

The OLED should display the CRAB-X startup logo.

The robot should move into its default standing position.

---

# Step 11 — Walking Test

Place the robot on a flat surface.

Test:

- Stand
- Forward Walk
- Backward Walk
- Turn Left
- Turn Right
- Dance Animation

If any servo moves incorrectly:

- Reverse its direction in firmware.
- Recalibrate its center position.

---

# Troubleshooting

## Robot Does Not Power On

- Check battery voltage.
- Verify the power switch.
- Confirm the BMS wiring.
- Measure LM2596 output.

---

## OLED Not Working

- Check I²C wiring.
- Verify SDA and SCL pins.
- Confirm OLED address.

---

## Servo Not Moving

- Check PCA9685 connection.
- Verify servo connector orientation.
- Test the servo individually.

---

## Robot Falls While Walking

- Recalibrate servos.
- Check leg orientation.
- Verify mechanical assembly.
- Tighten loose screws.

---

# Future Upgrades

CRAB-X has been designed with modularity in mind.

Future upgrades include:

- Wi-Fi Remote Control
- Mobile App Control
- Ultrasonic Obstacle Detection
- IMU-Based Stabilization
- Battery Monitoring
- ESP32-CAM Vision
- Object Tracking
- AI Integration
- ROS 2 Support

---

# Related Documentation

- Hardware Guide
- Bill of Materials (BOM)
- 3D Printing Guide
- Electronics Guide
- Firmware Documentation

---

> **Tip**
>
> Assemble the robot slowly and test each subsystem before moving to the next stage. Verifying power, wiring, and servo operation incrementally will make troubleshooting much easier and help ensure a successful first build.

Happy Building! 🦀🤖
