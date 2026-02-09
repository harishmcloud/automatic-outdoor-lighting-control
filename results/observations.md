# Experimental Observations

This document presents the experimental observations recorded during the
testing of the Automatic Outdoor Lighting Control System. The objective of
these experiments was to evaluate the response of the LDR sensor module and
the relay-controlled AC load under varying ambient light conditions.

---

## Test Setup

The system was tested under controlled indoor and outdoor lighting
conditions. The hardware setup consisted of an Arduino Uno, LDR sensor
module, relay module, and an AC bulb as the demonstration load.

### Test Conditions
- Power Supply: 5V (Arduino and relay module)
- LDR Connection: Analog pin A0
- Relay Control Pin: Digital pin 9
- Sampling Interval: 500 ms delay

---

## Observed LDR Sensor Values

The analog output of the LDR sensor was observed under different ambient
light conditions using the Arduino Serial Monitor.

| Ambient Light Condition | LDR Output (Analog Value) |
|-------------------------|---------------------------|
| Complete Darkness       | 0 – 50                    |
| Dim Light               | 80 – 300                  |
| Moderate Light          | 400 – 700                 |
| Bright Light            | 900 – 1015                |

These values may vary slightly depending on environmental conditions and
sensor placement.

---

## Relay Switching Behavior

The relay response was observed based on the predefined threshold value
used in the Arduino program.

- When the LDR output value was **greater than or equal to the threshold**
  - The relay remained **OFF**
  - The AC bulb was turned **OFF**

- When the LDR output value was **below the threshold**
  - The relay was **activated**
  - The AC bulb was turned **ON**

This behavior confirmed the correct functioning of the automatic switching
logic implemented in the Arduino sketch.

---

## System Response Time

The system demonstrated a fast response to changes in ambient light levels.
The relay switching action occurred almost instantaneously after the LDR
sensor detected a change in light intensity, with a minor delay introduced
intentionally through software timing.

---

## Accuracy and Reliability

- The LDR sensor consistently detected changes in ambient light intensity.
- No false triggering of the relay was observed during steady lighting
  conditions.
- The system remained stable during continuous operation.

---

## Summary of Observations

- The LDR sensor provided reliable analog readings corresponding to light
  intensity variations.
- The relay module responded accurately to control signals from the Arduino.
- The AC lighting load was successfully automated based on ambient light
  conditions.
- The experimental observations validate the effectiveness of the proposed
  lighting control system.