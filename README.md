# 🦀 CRAB-X

### Bio-Inspired Quadruped Robotic Crab

![License](https://img.shields.io/badge/License-Apache%202.0-yellow)
![Controller](https://img.shields.io/badge/Controller-NodeMCU%20ESP8266-blue)
![Servo%20Driver](https://img.shields.io/badge/Servo%20Driver-PCA9685-success)
![Firmware](https://img.shields.io/badge/Firmware-C%2B%2B-blue?logo=c%2B%2B)
![IDE](https://img.shields.io/badge/IDE-Arduino-00979D?logo=arduino\&logoColor=white)
![CAD](https://img.shields.io/badge/CAD-Fusion%20360-orange)
![Status](https://img.shields.io/badge/Status-Under%20Development-success)

> **A compact, 3D-printed bio-inspired robotic crab designed for embedded systems, robotics education, locomotion research, and future autonomous robotics.**

---

> [!IMPORTANT]
>
> **Project Status:** 🚧 Under Active Development
>
> CRAB-X is currently in the hardware assembly and firmware development stage. Walking algorithms, wireless control, and advanced autonomous features are actively being developed.

---

# 📖 Overview

**CRAB-X** is an open-source quadruped robotics platform inspired by the natural movement of crabs.

Designed around affordable off-the-shelf components, CRAB-X combines embedded programming, 3D printing, electronics, and robotics into a modular learning platform. The project focuses on developing smooth walking gaits, expressive OLED animations, wireless control, and future autonomous capabilities.

The robot is intentionally designed to be beginner-friendly while remaining expandable for advanced robotics research.

---

> [!NOTE]
>
> CRAB-X is inspired by the excellent open-source **Sesame Robot** created by **Dorian Todd**.
>
> While the initial mechanical concept was inspired by Sesame Robot, CRAB-X is being redesigned with its own firmware architecture, electronics, documentation, modular hardware, and future AI capabilities.

---

# ✨ Features

* 🦀 Bio-inspired quadruped crab locomotion
* 🖨 Fully 3D printable PLA chassis
* ⚙️ 8 × MG90S metal gear servo actuators
* 📟 Animated OLED facial expressions
* 📡 Wi-Fi control using NodeMCU ESP8266
* 🎛 PCA9685 16-channel PWM servo controller
* 🔋 Rechargeable 2S Li-ion battery system
* 🧠 Modular firmware architecture
* 🔧 Expandable electronics platform
* 🚀 Designed for future autonomous robotics

---

# 🎯 Project Goals

* Learn embedded systems programming
* Develop stable walking algorithms
* Explore quadruped robot kinematics
* Design modular robotic hardware
* Build reusable robotics firmware
* Implement wireless robot control
* Add computer vision
* Develop autonomous navigation

---

# 🛠 Hardware

## Controller

* NodeMCU ESP8266

## Servo Driver

* PCA9685 16-Channel PWM Driver

## Display

* 0.96" SSD1306 OLED Display

## Actuation

* 8 × MG90S Metal Gear Servo Motors

## Power System

* 2 × 18650 Li-ion Cells (2S)
* HX-2S-A2 Battery Management System
* LM2596 Buck Converter
* Power Switch

## Mechanical

* Fully 3D Printed PLA Chassis
* Modular Leg Assembly

## Future Expansion

* ESP32-CAM
* MPU6050 IMU
* Ultrasonic Sensor
* ToF Distance Sensor

---

# 💻 Software Stack

### Current

* Arduino IDE
* C++
* ESP8266 Arduino Core
* PCA9685 Library
* Adafruit SSD1306
* Adafruit GFX
* Fusion 360
* Git
* GitHub

### Planned

* ROS 2
* OpenCV
* Python
* TensorFlow Lite
* Micro-ROS

---

# 🚀 Current Development

### Completed

* ✅ CAD Design
* ✅ Hardware Planning
* ✅ Bill of Materials
* ✅ Firmware Architecture
* ✅ Documentation

### In Progress

* 🔄 3D Printing
* 🔄 Electronics Assembly
* 🔄 Servo Installation
* 🔄 OLED Integration
* 🔄 Motion Development

### Upcoming

* Walking Gaits
* Servo Calibration
* Web-Based Controller
* Wi-Fi API
* OLED Animations

---

# 📂 Repository Structure

```text
CRAB-X/
│
├── firmware/
│   ├── CRAB-X.ino
│   ├── config.h
│   ├── servo_controller.h
│   ├── calibration.h
│   ├── display.h
│   ├── faces.h
│   ├── movement.h
│   ├── animations.h
│   ├── utils.h
│   └── README.md
│
├── hardware/
│   ├── bom/
│   ├── cad/
│   ├── printing/
│   └── electronics/
│
├── docs/
│   ├── build-guide/
│   ├── wiring-guide/
│   └── firmware-guide/
│
├── assets/
│
├── LICENSE
└── README.md
```

---

# 🗺 Development Roadmap

## Phase 1 — Hardware

* ✅ CAD Design
* ✅ BOM
* 🔄 3D Printing
* 🔄 Electronics Assembly
* 🔄 Power System

---

## Phase 2 — Motion

* Servo Calibration
* Walking Gaits
* Motion Optimization
* OLED Expressions

---

## Phase 3 — Connectivity

* Wi-Fi Control
* Web Dashboard
* REST API
* OTA Firmware Updates

---

## Phase 4 — Intelligence

* ESP32-CAM Integration
* Computer Vision
* Object Detection
* Obstacle Avoidance

---

## Phase 5 — Autonomous Robotics

* Autonomous Navigation
* AI Motion Planning
* ROS 2 Integration
* SLAM
* Multi-Robot Communication

---

# 📷 Gallery

Coming Soon

* CAD Renders
* 3D Printed Parts
* Hardware Assembly
* Walking Demonstrations
* Firmware Development
* Build Process
* Motion Videos

---

# 📚 Planned Features

* OLED Face Animations
* Wi-Fi Remote Controller
* REST API
* OTA Firmware Updates
* Computer Vision
* Object Tracking
* Autonomous Navigation
* Sensor Fusion
* ROS 2 Support
* AI Motion Optimization

---

# 🤝 Contributing

Contributions are always welcome.

Areas where help is appreciated:

* Embedded Firmware
* Walking Algorithms
* Robot Kinematics
* PCB Design
* Mechanical Improvements
* Computer Vision
* Sensor Integration
* ROS 2
* Documentation

---

# 🙏 Acknowledgements

CRAB-X is inspired by the open-source **Sesame Robot** project created by **Dorian Todd**.

The project provided valuable inspiration for learning quadruped robotics and embedded systems.

CRAB-X is an independent educational project focused on expanding the original concept through new firmware, documentation, electronics architecture, wireless control, OLED animations, and future autonomous robotics features.

Original Project:

* **Sesame Robot**
* **Creator:** Dorian Todd
* **License:** Apache License 2.0
* **Repository:** https://github.com/dorianborian/sesame-robot

Special thanks to Dorian Todd and the open-source robotics community for making advanced robotics accessible to everyone.

---

# 👨‍💻 Author

## LKSHAY TYAGI

**B.Tech Computer Science Engineering**

Embedded Systems • Robotics • Computer Vision • Autonomous Systems • UAV Software

GitHub:
https://github.com/lkshaytyagi192

---

# ⭐ Support the Project

If you like **CRAB-X**, consider giving the repository a ⭐.

Every star helps motivate the continued development of CRAB-X into a complete open-source autonomous robotics platform.

---

> **"Learning robotics isn't about building a robot once—it's about building a platform that keeps evolving."** 🦀🤖
