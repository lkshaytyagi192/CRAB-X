# Bill of Materials (BOM)

This document lists all the hardware and electronic components required to build **CRAB-X**, a 3D-printed bio-inspired robotic crab.

Before beginning assembly, ensure that you have all the required components. Refer to the **Build Guide** for detailed assembly instructions.

> [!NOTE]
> Component models may vary depending on your supplier. Equivalent alternatives with similar specifications can also be used.

---

# Core Electronics

| Component | Qty | Description |
| ---------- | :-: | ----------- |
| ESP32 Development Board | 1 | Main controller for CRAB-X |
| MG90S Metal Gear Servo Motors | 8 | Leg actuation system |
| 0.96" OLED Display *(Optional)* | 1 | Robot status display |
| Slide/Rocker Power Switch | 1 | Main power control |
| XT30/XT60 Battery Connector | 1 | Battery connection |
| Jumper Wire Kit | 1 | Signal wiring |
| 22 AWG Silicone Wire | 2 m | Power distribution |
| Heat Shrink Tubing | 1 Kit | Electrical insulation |
| Zip Ties | 1 Pack | Cable management |

---

# Power System

| Component | Qty | Description |
| ---------- | :-: | ----------- |
| 2S Li-ion Battery (7.4V) | 1 | Recommended battery pack |
| Battery Charger | 1 | Compatible with battery |
| 5V Buck Converter (5A Recommended) | 1 | Stable servo power supply |
| Power Distribution Board *(Optional)* | 1 | Cleaner wiring |

---

# Sensors (Optional Upgrades)

| Component | Qty | Purpose |
| ---------- | :-: | ------- |
| Ultrasonic Sensor (HC-SR04) | 1 | Obstacle detection |
| MPU6050 IMU | 1 | Orientation sensing |
| ToF Distance Sensor | 1 | Accurate distance measurement |
| ESP32-CAM | 1 | Computer vision |
| IR Sensor | 2 | Line detection / edge sensing |

---

# Mechanical Hardware

| Component | Qty | Description |
| ---------- | :-: | ----------- |
| M2 × 8 mm Screws | ~30 | Servo mounting |
| M2 × 12 mm Screws | ~20 | Frame assembly |
| M2 Nuts | ~40 | Fastening |
| M3 Standoffs | 4 | Controller mounting |
| Servo Horn Screws | 8 | Included with servos |

---

# 3D Printed Parts

Print all STL files located in:

```
hardware/printing/
```

Recommended Material:

- PLA
- PETG *(Optional)*

Recommended Print Settings:

- Layer Height: 0.2 mm
- Infill: 20%
- Nozzle: 0.4 mm

---

# Required Tools

| Tool | Purpose |
| ---- | ------- |
| Soldering Iron | Electrical assembly |
| Solder Wire | Component soldering |
| Wire Stripper | Wire preparation |
| Flush Cutter | Trim wires and zip ties |
| Screwdriver Set | Robot assembly |
| Allen Key Set | Fasteners |
| Digital Multimeter | Voltage testing |
| Hot Glue Gun *(Optional)* | Cable management |

---

# Wiring Notes

Before powering the robot:

- Verify battery polarity.
- Confirm all servo connections.
- Check ESP32 pin assignments.
- Ensure there are no short circuits.
- Secure loose wires using zip ties.

> [!WARNING]
> Never connect the battery directly to the ESP32 without proper voltage regulation. Always use a suitable buck converter or regulated power supply.

---

# Estimated Build Cost

| Category | Approximate Cost |
| -------- | ---------------- |
| Electronics | $35 – $45 |
| Servo Motors | $20 – $30 |
| Battery & Power | $15 – $25 |
| 3D Printing | $10 – $20 |
| Hardware & Fasteners | $10 – $15 |

### **Estimated Total**

**$90 – $130 USD**

*(Cost may vary depending on location and supplier.)*

---

# Related Documentation

- [Build Guide](../../docs/build-guide/README.md)
- [Printing Guide](../printing/README.md)
- [Firmware](../../firmware/README.md)

---

> **Tip**
>
> Purchase one or two extra servo motors and additional screws. Spare components are extremely useful during assembly, testing, and future maintenance.

Happy Building! 🦀🤖
