# 🔌 CRAB-X Wiring Guide

This document explains the complete electrical wiring for **CRAB-X**, including power distribution, servo connections, OLED display, and the PCA9685 servo controller.

Follow this guide carefully before powering on the robot.

---

# Table of Contents

- System Overview
- Power Architecture
- NodeMCU Pinout
- OLED Connections
- PCA9685 Connections
- Servo Connections
- Battery Wiring
- Buck Converter Wiring
- Power Distribution
- Wiring Diagram
- Pre-Power Checklist
- Safety Notes
- Troubleshooting

---

# System Overview

CRAB-X uses a NodeMCU ESP8266 as the main controller while a PCA9685 controls all eight servo motors.

```
                 2S Li-ion Battery
                         │
                   Power Switch
                         │
                      2S BMS
                         │
                 LM2596 Buck Converter
                    (Output = 5V)
                         │
          ┌──────────────┴──────────────┐
          │                             │
      NodeMCU ESP8266             PCA9685 Driver
                                        │
                                  8 MG90S Servos
```

---

# Power Architecture

Battery Voltage

```
7.4V Nominal
8.4V Fully Charged
```

↓

LM2596 Buck Converter

↓

Stable 5V Output

↓

- NodeMCU VIN
- PCA9685 V+
- Servo Motors

---

# NodeMCU Connections

| NodeMCU Pin | Connected To |
|-------------|--------------|
| VIN | LM2596 5V Output |
| GND | Common Ground |
| D1 (GPIO5) | PCA9685 SCL + OLED SCL |
| D2 (GPIO4) | PCA9685 SDA + OLED SDA |
| 3V3 | PCA9685 VCC + OLED VCC |

---

# OLED Display Wiring

| OLED Pin | NodeMCU |
|----------|----------|
| VCC | 3.3V |
| GND | GND |
| SCL | D1 |
| SDA | D2 |

Default Address

```
0x3C
```

---

# PCA9685 Wiring

| PCA9685 Pin | Connected To |
|--------------|-------------|
| VCC | 3.3V |
| GND | GND |
| SDA | D2 |
| SCL | D1 |
| OE | GND |
| V+ | 5V Buck Output |

---

# Servo Connections

Each MG90S servo has three wires:

Brown

```
Ground
```

Red

```
+5V
```

Orange

```
Signal
```

---

## Servo Channel Assignment

| PCA9685 Channel | Servo |
|-----------------|-------|
| CH0 | Front Right Hip |
| CH1 | Front Right Knee |
| CH2 | Rear Right Hip |
| CH3 | Rear Right Knee |
| CH4 | Front Left Hip |
| CH5 | Front Left Knee |
| CH6 | Rear Left Hip |
| CH7 | Rear Left Knee |

Channels 8–15 remain available for future upgrades.

---

# Battery Wiring

```
2 × 18650 Cells
        │
   2S Battery Pack
        │
      2S BMS
        │
    Power Switch
        │
 LM2596 Buck Converter
```

Never connect the battery directly to the electronics.

---

# Buck Converter

Input

```
Battery Output
```

Output

```
5.00V
```

Powering

- NodeMCU VIN
- PCA9685 V+
- Servo Motors

Use a multimeter to adjust the output to **5.0V** before connecting the robot.

---

# Common Ground

All grounds **must** be connected together.

```
Battery (-)
      │
 LM2596 GND
      │
 NodeMCU GND
      │
 PCA9685 GND
      │
 OLED GND
      │
 All Servo Grounds
```

Without a common ground, the servos may jitter or fail to respond correctly.

---

# Wiring Diagram

```
                    2S Battery
                         │
                    Power Switch
                         │
                       2S BMS
                         │
                  LM2596 Buck
                    Output 5V
                         │
         ┌───────────────┴───────────────┐
         │                               │
         │                           PCA9685
         │                          ┌────────┐
         │                          │ CH0-7  │
         │                          └────────┘
         │                               │
         │                          8 Servos
         │
    NodeMCU ESP8266
      │       │
      │       │
     SDA     SCL
      │       │
      └──OLED─┘
```

---

# Pre-Power Checklist

Before connecting the battery:

- Servo polarity checked
- OLED wiring verified
- PCA9685 connected correctly
- Buck converter adjusted to 5V
- Battery polarity confirmed
- Common ground connected
- No loose wires
- No exposed conductors
- No short circuits

---

# Safety Notes

⚠ Never connect 7.4V directly to the NodeMCU.

⚠ Never power servos from the NodeMCU 5V or 3.3V pins.

⚠ Always use the LM2596 buck converter.

⚠ Disconnect power before changing wiring.

⚠ Verify polarity before every power-on.

---

# Troubleshooting

## OLED Not Detected

- Check SDA/SCL wiring.
- Verify I²C address (0x3C).
- Confirm 3.3V supply.

---

## Servos Not Moving

- Check PCA9685 power.
- Verify servo orientation.
- Confirm channel assignment.
- Test each servo individually.

---

## Servo Jitter

- Ensure all grounds are common.
- Check buck converter output.
- Inspect loose connectors.

---

## NodeMCU Keeps Restarting

Possible causes:

- Buck converter voltage too low.
- Servo current spikes.
- Incorrect power wiring.

---

## Robot Does Not Turn On

Check:

- Battery voltage
- BMS wiring
- Power switch
- LM2596 output
- VIN connection

---

# Future Expansion

The remaining PCA9685 channels and I²C bus allow additional hardware to be added easily.

Planned upgrades include:

- Ultrasonic Sensor
- MPU6050 IMU
- ToF Distance Sensor
- ESP32-CAM
- Battery Voltage Monitor
- RGB LEDs
- Buzzer
- Bluetooth Module

---

# Related Documentation

- Build Guide
- Hardware Guide
- Bill of Materials (BOM)
- Firmware Documentation
- 3D Printing Guide

---

> **Tip**
>
> Test one subsystem at a time. Verify the power supply first, then the OLED, then the PCA9685, and finally each servo individually before attempting the robot's first walk.

Happy Building! 🦀🤖
