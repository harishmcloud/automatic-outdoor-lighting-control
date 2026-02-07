# Hardware Components List

This document lists the hardware components used in the
Automatic Outdoor Lighting Control System along with their
primary functions.

---

## 1. Arduino Uno

- Microcontroller: ATmega328P
- Operating Voltage: 5V
- Function:
  - Acts as the central control unit
  - Processes sensor input and controls the relay module

---

## 2. LDR Sensor Module

- Type: Light Dependent Resistor (LDR)
- Function:
  - Detects ambient light intensity
  - Provides analog or digital output to the Arduino
- Typical Resistance:
  - ~10 kΩ in darkness
  - ~200 Ω in bright light

---

## 3. Relay Module

- Type: 5V Single Channel Relay
- Function:
  - Electrically isolates low-voltage control circuitry
  - Switches high-voltage AC load safely
- Load Rating:
  - Suitable for AC loads (e.g., 240V bulb)

---

## 4. AC Load (Demo Circuit)

- Type: Incandescent / AC Bulb
- Rating:
  - 240V, 40W (typical)
- Function:
  - Demonstrates automatic lighting control

---

## 5. Power Supply

- Source:
  - USB or external 5V power adapter
- Function:
  - Powers the Arduino and relay module

---

## 6. Connecting Wires

- Type: Jumper wires
- Function:
  - Used to interconnect Arduino, sensor, and relay modules