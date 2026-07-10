# Hardware

This directory contains all of the mechanical and electronic resources required to build **CRAB-X**, a bio-inspired 3D-printed robotic crab.

The hardware has been designed to be modular, allowing builders to assemble the robot using readily available components while providing flexibility for future upgrades such as computer vision, autonomous navigation, and additional sensors.

Whether you're building your first walking robot or experimenting with embedded systems, this directory contains everything needed to assemble the physical platform.

---

# Directory Guide

| Folder | Description |
| ------- | ----------- |
| [bom](bom/README.md) | Complete Bill of Materials (BOM) including electronics, mechanical components, fasteners, and recommended tools. |
| [cad](cad/README.md) | Original Fusion 360 designs, STEP files, and editable CAD models for customization and future development. |
| [printing](printing/README.md) | STL files, recommended print settings, printer orientation, and assembly notes for all 3D-printed components. |
| [electronics](electronics/README.md) | Circuit diagrams, wiring layouts, pin connections, and electrical documentation. *(Coming Soon)* |

---

# Hardware Specifications

## Controller

- ESP32 Development Board

## Actuators

- 8 × MG90S Metal Gear Servo Motors

## Structure

- Fully 3D Printed PLA Chassis
- Modular Leg Assembly
- Lightweight Mechanical Design

## Power System

- 2S Li-ion Battery
- Voltage Regulator
- Power Switch

## Expandable Modules

- ESP32-CAM
- Ultrasonic Sensor
- IMU
- OLED Display
- ToF Distance Sensor

---

# Getting Started

## 1. Print the Mechanical Parts

Download the STL files from the **printing** directory and print every required component using the recommended settings.

Recommended Material:

- PLA
- 0.2 mm Layer Height
- 20% Infill

---

## 2. Gather Components

Use the **Bill of Materials (BOM)** to collect all electronics, screws, bearings, and accessories before beginning assembly.

---

## 3. Assemble the Robot

Follow the **Build Guide** to assemble the chassis, install servos, and mount the electronics.

---

## 4. Complete Wiring

Connect every servo and power connection according to the wiring diagrams before applying power.

Double-check:

- Servo polarity
- Battery polarity
- Power distribution
- ESP32 pin assignments

---

## 5. Upload Firmware

After completing the hardware assembly, upload the latest CRAB-X firmware to the ESP32 using Arduino IDE.

---

# Recommended Tools

- Phillips Screwdriver Set
- Precision Hex Drivers
- Soldering Iron
- Solder Wire
- Wire Stripper
- Flush Cutter
- Digital Multimeter
- Hot Glue Gun
- Zip Ties

---

# Future Hardware Upgrades

The modular design allows CRAB-X to evolve into an advanced autonomous robot.

Future hardware support includes:

- Computer Vision
- AI Camera Module
- Autonomous Navigation
- ROS 2 Compatibility
- SLAM Sensors
- LiDAR Integration
- Voice Control
- Wireless Telemetry

---

# Related Documentation

- [Build Guide](../docs/build-guide/README.md)
- [Wiring Guide](../docs/wiring-guide/README.md)
- [Firmware](../firmware/README.md)

---

> **Note**
>
> CRAB-X is an open-source robotics platform designed for learning, experimentation, and research. The hardware architecture is continuously evolving, and future revisions may introduce additional sensors, improved locomotion mechanisms, and enhanced autonomous capabilities.

Happy Building! 🦀🤖
