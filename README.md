# Automatic Light Control using LDR and Relay

This project automatically turns a light ON or OFF based on ambient light intensity using an LDR (Light Dependent Resistor) and a relay module controlled by an Arduino.

## 💡 Features

- Voltage divider circuit design using LDR and resistor
- ADC-based light intensity reading (0–1023)
- Threshold-based switching logic
- Calibrated system using empirical testing and SNR analysis

---

## 🧰 Hardware Used

- Arduino UNO/Nano
- LDR sensor
- 10kΩ resistor
- 5V Relay Module
- Jumper wires
- Breadboard or PCB
- Power source (5V)

---

## 🧪 Circuit Diagram

The circuit consists of a simple voltage divider formed by the LDR and a 10kΩ resistor. The midpoint connects to the analog pin A0 of the Arduino.

![Circuit Diagram](assets/circuit_diagram.png)

> ℹ️ Replace the placeholder image above with your actual circuit diagram or simulation screenshot.

---

## ⚙️ How it Works

1. LDR value is read via analog pin (0-1023).
2. Threshold is defined (e.g., 500).
3. If LDR value < threshold → it's dark → turn ON relay.
4. If LDR value >= threshold → it's bright → turn OFF relay.

---

## 📏 Calibration

To find an accurate threshold:
- Measure LDR ADC values under different lighting.
- Use SNR analysis (filter out noise).
- Adjust the `threshold` value accordingly in the Arduino code.

---

## 🚀 Getting Started

### Upload the Code:
1. Connect Arduino to PC.
2. Open `light_control.ino` in Arduino IDE.
3. Upload to the board.

### Test:
- Vary light on the LDR.
- Observe relay turning ON/OFF.

---

## 📄 License

This project is open-source. Feel free to use, modify, and share.