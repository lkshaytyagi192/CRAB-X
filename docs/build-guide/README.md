# 🦀 CRAB-X Build Guide

Welcome to the official build guide for **CRAB-X**, a fully 3D-printed bio-inspired robotic crab powered by an ESP32 microcontroller.

This guide walks you through every stage of the build—from printing the parts to assembling the robot, wiring the electronics, uploading the firmware, and performing the initial walking tests.

> **Estimated Build Time:** 4–8 Hours  
> **Difficulty:** Intermediate  
> **Required Skills:** Basic soldering, 3D printing, Arduino IDE, and electronics assembly.

---

# Build Overview

| Phase | Objective | Estimated Time |
|--------|-----------|----------------|
| 1 | Print all 3D parts | 2–4 Hours |
| 2 | Gather electronic components | 30 Minutes |
| 3 | Assemble the mechanical frame | 1 Hour |
| 4 | Install servo motors | 45 Minutes |
| 5 | Complete wiring | 45 Minutes |
| 6 | Upload firmware | 15 Minutes |
| 7 | Calibrate servo positions | 30 Minutes |
| 8 | Test walking gait | 30 Minutes |

> **Tip:** Complete each phase before moving to the next. It makes troubleshooting much easier.

---

# Phase 1 — Print the Parts

## Goal

Print every mechanical component required for the robot.

### Recommended Print Settings

- Material: PLA
- Layer Height: 0.2 mm
- Infill: 20%
- Nozzle: 0.4 mm
- Supports: Only where required

After printing:

- Remove supports carefully.
- Sand rough edges if necessary.
- Test-fit all moving joints.

### Checklist

- [ ] All parts printed
- [ ] Supports removed
- [ ] Parts cleaned
- [ ] Moving joints fit smoothly

---

# Phase 2 — Gather Components

## Required Electronics

- ESP32 Development Board
- 8× MG90S Servo Motors
- Battery Pack
- Power Switch
- Servo Extension Wires
- Jumper Wires
- M2 Screws
- Heat Shrink
- Zip Ties

### Optional Upgrades

- ESP32-CAM
- OLED Display
- Ultrasonic Sensor
- IMU Module

### Checklist

- [ ] Electronics collected
- [ ] Servos tested
- [ ] Battery charged

---

# Phase 3 — Mechanical Assembly

## Goal

Build the robot chassis before installing electronics.

### Assembly Order

1. Bottom Frame
2. Side Panels
3. Servo Mounts
4. Leg Holders
5. Top Cover

Do not fully tighten screws until every part has been installed.

### Checklist

- [ ] Frame assembled
- [ ] Legs move freely
- [ ] No interference between joints

---

# Phase 4 — Servo Installation

Install all servo motors into their designated locations.

Recommended installation order:

- Front Left
- Front Right
- Rear Left
- Rear Right

Secure every servo using M2 screws.

> **Important:** Do **NOT** install the servo horns yet. Calibration must be completed first.

### Checklist

- [ ] All servos mounted
- [ ] Wires routed correctly
- [ ] No wires pinched

---

# Phase 5 — Electronics & Wiring

Install all electronic components inside the chassis.

## Connect

- ESP32
- Servo Power
- Servo Signal Pins
- Battery
- Power Switch

Bundle wires neatly using zip ties.

Keep enough slack to allow free leg movement.

### Checklist

- [ ] Wiring completed
- [ ] Power connections verified
- [ ] Cable management completed

---

# Phase 6 — Upload Firmware

Open the CRAB-X firmware in Arduino IDE.

Select:

- ESP32 Board
- Correct COM Port

Upload the firmware.

Once uploaded, restart the robot.

### Checklist

- [ ] Firmware uploaded
- [ ] ESP32 boots successfully
- [ ] No upload errors

---

# Phase 7 — Servo Calibration

Servo calibration ensures every leg starts from the correct position.

## Calibration Steps

1. Power on CRAB-X.
2. Run the Servo Calibration sketch.
3. Move every servo to 90°.
4. Install the servo horns.
5. Tighten the center screw.

> **Warning:** Incorrect calibration may result in unstable walking or excessive servo load.

### Checklist

- [ ] Every servo centered
- [ ] Servo horns installed
- [ ] Screws tightened

---

# Phase 8 — Walking Test

Run the default walking program.

Verify:

- Forward walking
- Backward walking
- Left turn
- Right turn

Observe the robot carefully.

If any leg behaves unexpectedly:

- Check servo orientation.
- Verify wiring.
- Repeat calibration.

### Checklist

- [ ] Walking successful
- [ ] Stable movement
- [ ] No excessive vibration

---

# Troubleshooting

## Robot Doesn't Power On

- Verify battery voltage.
- Check power switch.
- Confirm ESP32 power LED.

---

## Servo Jitter

Possible causes:

- Low battery voltage
- Loose servo connector
- Incorrect wiring
- Servo damage

---

## Robot Walks Unevenly

- Recalibrate servo positions.
- Check horn alignment.
- Inspect printed joints.

---

## Firmware Upload Failed

- Verify USB cable.
- Select the correct COM port.
- Hold the BOOT button if required.

---

# Final Inspection

Before operating CRAB-X:

- [ ] All screws tightened
- [ ] Servo horns calibrated
- [ ] Battery secured
- [ ] Wiring organized
- [ ] Firmware uploaded
- [ ] Walking test completed

---

# Future Upgrades

CRAB-X has been designed with modularity in mind.

Future expansion may include:

- ESP32-CAM
- Computer Vision
- Obstacle Avoidance
- AI-Based Navigation
- Voice Control
- Mobile App Control
- ROS 2 Integration
- Autonomous Exploration

---

# Congratulations! 🎉

Your **CRAB-X** robotic crab is now assembled and ready for experimentation.

Continue improving the platform with new hardware, better walking algorithms, computer vision, and intelligent autonomous behaviors.

Happy Building! 🦀🤖
