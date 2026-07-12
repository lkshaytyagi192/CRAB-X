# 3D Printing Guide

This guide provides the recommended 3D printing settings and preparation steps for building **CRAB-X**, an affordable open-source desktop robotic crab.

CRAB-X is designed to be **easy to print on most consumer FDM 3D printers** with minimal supports and simple post-processing.

> [!NOTE]
> All STL files are optimized for **0.4 mm nozzles** and standard FDM printers. Slight dimensional adjustments may be required depending on your printer's calibration.

---

# Recommended Printing Material

| Material | Recommendation |
|----------|----------------|
| PLA | ⭐ Recommended |
| PLA+ | ⭐ Highly Recommended |
| PETG | Optional (Higher durability) |
| ABS | Not Recommended |

---

# Recommended Print Settings

| Setting | Value |
|----------|-------|
| Nozzle Diameter | 0.4 mm |
| Layer Height | 0.20 mm |
| Initial Layer Height | 0.24 mm |
| Wall Count | 3 |
| Top Layers | 5 |
| Bottom Layers | 5 |
| Infill | 20% |
| Infill Pattern | Gyroid |
| Print Speed | 50–60 mm/s |
| Nozzle Temperature | 200–210°C *(PLA)* |
| Bed Temperature | 60°C |
| Supports | Only where required |
| Adhesion | Skirt or Brim |

---

# Print Orientation

For maximum strength:

- Print all leg links flat on the build plate.
- Print the body with the bottom surface facing the print bed.
- Print servo mounts flat.
- Print the OLED mount face-down.
- Print battery holder flat.

Proper orientation improves layer strength and reduces the need for supports.

---

# 3D Printed Parts

All printable models are located in:

```text
hardware/printing/
```

---

# Printing Order

Printing in the following order is recommended:

1. Servo Mounts
2. Upper Leg Links
3. Lower Leg Links
4. Main Body
5. Top Cover
6. Front Cover
7. OLED Mount
8. Battery Holder
9. Decorative Parts

Printing smaller parts first allows you to verify printer tolerances before committing to longer prints.

---

# Support Guide

| Component | Supports Required |
|-----------|-------------------|
| Main Body | No |
| Top Cover | Yes (Minimal) |
| Front Cover | No |
| Servo Mounts | No |
| Upper Leg Links | No |
| Lower Leg Links | No |
| OLED Mount | No |
| Battery Holder | No |

> [!TIP]
> Enable **Tree Supports** or **Organic Supports** if your slicer supports them. They are easier to remove and leave cleaner surfaces.

---

# Infill Recommendations

| Part | Infill |
|------|--------|
| Main Body | 20% |
| Leg Links | 30% |
| Servo Mounts | 40% |
| Battery Holder | 20% |
| OLED Mount | 20% |

Higher infill on the leg components improves stiffness and walking stability.

---

# Wall Thickness

| Part | Walls |
|------|------:|
| Main Body | 3 |
| Legs | 4 |
| Servo Mounts | 4 |
| Covers | 3 |

---

# Layer Orientation

Whenever possible:

- Keep servo mounting holes vertical.
- Keep load-bearing layers parallel to the direction of force.
- Avoid printing long structural parts standing vertically.

This greatly improves mechanical strength.

---

# Post Processing

After printing:

- Remove supports carefully.
- Sand rough edges.
- Test-fit every servo before assembly.
- Clean screw holes if necessary.
- Remove elephant's foot from the first layer.
- Ensure moving parts rotate freely.

Do **not** force servos into the printed mounts.

---

# Assembly Preparation Checklist

Before starting assembly:

- ✅ Verify all parts are printed.
- ✅ Test-fit each MG90S servo.
- ✅ Confirm screw holes align correctly.
- ✅ Remove any remaining support material.
- ✅ Label left and right leg components.
- ✅ Organize screws and hardware.

---

# Printer Calibration

Before printing the complete robot, verify:

- Bed leveling
- Extruder calibration
- Dimensional accuracy
- First layer adhesion

Printing a small calibration cube is recommended before printing structural components.

---

# Estimated Printing Time

| Component | Approximate Time |
|-----------|-----------------:|
| Main Body | 6–8 Hours |
| Top Cover | 3–4 Hours |
| Servo Mounts | 2 Hours |
| Upper Leg Links | 4 Hours |
| Lower Leg Links | 4 Hours |
| Battery Holder | 45 Minutes |
| OLED Mount | 30 Minutes |

**Total Estimated Print Time:** **20–24 Hours**

*(Varies depending on printer and print speed.)*

---

# Recommended Print Colors

Suggested color combinations:

- Black + Orange
- White + Black
- Gray + Red
- Matte Black
- Blue + White

Using two colors gives CRAB-X a more premium appearance.

---

# Troubleshooting

| Problem | Solution |
|----------|----------|
| Servo doesn't fit | Adjust horizontal expansion or lightly sand the mount. |
| Loose servo mount | Reprint with better dimensional calibration or use thin shims. |
| Warping | Increase bed adhesion and bed temperature. |
| Weak leg | Increase infill and wall count. |
| Poor first layer | Re-level the print bed. |

---

# Safety Notes

> [!WARNING]
> Never force screws directly into printed plastic without proper alignment. Excessive force may crack the printed components.

> [!WARNING]
> Ensure all printed parts are fully cooled before assembly to prevent deformation.

---

# Related Documentation

- [Bill of Materials](../bom/README.md)
- [Build Guide](../../docs/build-guide/README.md)
- [Firmware](../../firmware/README.md)

---

> [!TIP]
> Print **one complete leg assembly first** and verify servo fitment before printing the entire robot. This saves both material and printing time if adjustments are needed.

Happy Printing! 🦀🖨️
