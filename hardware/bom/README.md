# Bill of Materials (BOM)

This document lists all the hardware, electronic components, and mechanical parts required to build **CRAB-X**, an affordable open-source desktop robotic crab.

CRAB-X is designed around **low-cost, off-the-shelf components**, making it easy for students, makers, and robotics enthusiasts to build without requiring custom PCBs or expensive hardware.

> [!NOTE]
> Component brands may vary depending on your supplier. Equivalent alternatives with similar specifications can also be used.

---

# Hardware Version

| Item | Value |
|------|-------|
| Robot | CRAB-X |
| Hardware Version | V1.0 |
| Degrees of Freedom | 8 DOF |
| Controller | NodeMCU ESP8266 |
| Servo Driver | PCA9685 |
| Battery | 2×18650 Li-ion (2S) |

---

# Core Electronics

| Component | Qty | Description |
| ---------- | :-: | ----------- |
| NodeMCU ESP8266 Development Board | 1 | Main controller |
| PCA9685 16-Channel PWM Servo Driver | 1 | Controls all servo motors through I²C |
| MG90S Metal Gear Servo Motors | 8 | Robot leg actuation |
| 0.96" OLED Display (SSD1306, I²C) | 1 | Facial expressions and status display |
| Slide/Rocker Power Switch | 1 | Main power control |
| 22 AWG Silicone Wire | 2–3 m | Main power wiring |
| Jumper Wire Kit | 1 | Signal connections |
| Heat Shrink Tubing | 1 Kit | Wire insulation |
| Zip Ties | 1 Pack | Cable management |

---

# Power System

| Component | Qty | Description |
| ---------- | :-: | ----------- |
| 18650 Li-ion Cells | 2 | 3.7V cells connected in series (2S) |
| 2S Battery Holder | 1 | Holds two 18650 cells |
| 2S BMS Protection Board | 1 | Battery protection circuit |
| LM2596 Buck Converter | 1 | Regulates battery voltage to 5–6V |
| Li-ion Battery Charger | 1 | Compatible charger for 18650 cells |

> [!IMPORTANT]
> Set the LM2596 output voltage between **5.5V and 6.0V** before connecting the electronics.

---

# Mechanical Hardware

| Component | Qty | Description |
| ---------- | :-: | ----------- |
| M2 × 8 mm Screws | ~32 | Servo mounting |
| M2 × 12 mm Screws | ~20 | Body assembly |
| M2 Nuts | ~40 | Frame fastening |
| M3 Standoffs | 4 | Controller mounting |
| Servo Horn Screws | 8 | Included with MG90S servos |

---

# 3D Printed Parts

All printable models are located in:

```text
hardware/printing/
```

### Parts

- Main Body
- Top Cover
- Front Cover
- Left Front Leg
- Right Front Leg
- Left Rear Leg
- Right Rear Leg
- Upper Leg Links
- Lower Leg Links
- Servo Mounts
- OLED Mount
- Battery Holder Mount

---

# Recommended Print Settings

| Setting | Value |
|----------|-------|
| Material | PLA |
| Layer Height | 0.20 mm |
| Nozzle | 0.40 mm |
| Infill | 20% |
| Wall Count | 3 |
| Supports | Only where required |

PETG may also be used for increased durability.

---

# Required Tools

| Tool | Purpose |
|------|---------|
| Soldering Iron | Electrical assembly |
| Solder Wire | Soldering |
| Wire Stripper | Wire preparation |
| Flush Cutter | Trim wires |
| Screwdriver Set | Assembly |
| Digital Multimeter | Voltage verification |
| Hot Glue Gun *(Optional)* | Cable management |

---

# Wiring Notes

Before powering the robot:

- Verify battery polarity.
- Verify LM2596 output voltage.
- Check all servo orientations.
- Verify I²C wiring.
- Ensure all grounds are connected together.
- Secure loose wires with zip ties.

> [!WARNING]
> Never power the servo motors directly from the NodeMCU.
>
> The servo motors must be powered from the LM2596 output through the PCA9685 power rail.

---

# Optional Upgrades

These components are **not required** for CRAB-X V1 but are supported in future versions.

| Component | Purpose |
|-----------|---------|
| ESP32 Development Board | Higher performance controller |
| ESP32-CAM | Computer vision |
| MPU6050 | Balance sensing |
| HC-SR04 Ultrasonic Sensor | Obstacle detection |
| ToF Distance Sensor | Precise ranging |
| Bluetooth Module | Wireless control |
| RGB LEDs | Decorative lighting |
| Buzzer | Sound effects |

---

# Estimated Build Cost

| Category | Approximate Cost |
|----------|-----------------:|
| Electronics | ₹900 |
| Servo Motors | ₹1,350 |
| Battery & Power | ₹300 |
| Hardware & Fasteners | ₹250 |
| 3D Printing | ₹600 |

## Estimated Total

**₹3,200 – ₹3,600**

> *Prices may vary depending on supplier and location.*

---

# Build Difficulty

⭐⭐⭐☆☆ **Intermediate**

Basic knowledge of:

- Arduino IDE
- Soldering
- Electronics
- 3D Printing

is recommended.

---

# Related Documentation

- [Build Guide](../../docs/build-guide/README.md)
- [Printing Guide](../printing/README.md)
- [Firmware](../../firmware/README.md)

---

> [!TIP]
> Purchase **one extra MG90S servo motor** and a few additional screws. Spare components are extremely useful during assembly, calibration, and future maintenance.

---

Happy Building! 🦀🤖
