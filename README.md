# thermospark26
# 🔥 ThermoSpark 2026 — Battery Thermal Runaway Identifier

## 🚀 Overview

ThermoSpark is a real-time **Battery Thermal Runaway Detection System** designed to prevent hazardous battery failures.
It combines **IoT hardware (Arduino UNO)** with a **modern web dashboard** to monitor temperature and gas levels and automatically trigger a **kill switch** in critical conditions.

---

## 💡 Problem Statement

Battery thermal runaway is a dangerous chain reaction that can lead to:

* 🔥 Fires
* 💥 Explosions
* ⚠️ Severe safety risks in EVs and electronics

Early detection is difficult, and delayed response can be catastrophic.

---

## 🧠 Solution

ThermoSpark provides:

* Real-time monitoring of **temperature** and **electrolyte vapor**
* Smart threshold-based detection
* Automatic **MOSFET-based kill switch isolation**
* Live dashboard with alerts and system logs

---

## ⚙️ How It Works

1. **MQ-2 Sensor** detects gas leakage (electrolyte vapor)
2. **NTC Thermistor** monitors battery temperature
3. Data is sent via **Arduino (Serial - 9600 baud)**
4. Web dashboard reads data using **WebSerial API**
5. If thresholds exceed:

   * ⚠️ Warning state triggered
   * 🚨 Critical → Kill switch activated (power cut)

---

## 🛠 Tech Stack

### 💻 Frontend

* HTML
* CSS (Tailwind)
* JavaScript

### 🔌 Hardware

* Arduino UNO
* MQ-2 Gas Sensor
* NTC Thermistor
* IRLZ44N MOSFET

### 🌐 Communication

* WebSerial API

---

## ✨ Features

* 📊 Real-time telemetry dashboard
* 🌡 Temperature monitoring with gauge visualization
* 💨 Gas detection (ppm levels)
* ⚡ Automatic kill switch (hardware safety)
* 🚨 Smart alerts and warning system
* 🖥 Live terminal for raw data stream

---

## 📸 Dashboard Highlights

* Futuristic **glassmorphism UI**
* Animated **status indicators**
* Real-time **sensor visualization**
* Interactive **hardware connection panel**

---

## ⚙️ Installation & Setup

``
# Clone repository
git clone https://github.com/Anish-S-Kumar/thermospark26.git

# Open project
cd thermospark26

# Run
Open code.html in Chrome / Edge
``

---

## 🔌 Hardware Setup

* Connect MQ-2 → Analog Pin A0
* Connect Thermistor → Analog Pin A1
* MOSFET Gate → Digital Pin D7
* Upload Arduino code
* Connect via USB

---

## 🧪 Thresholds

* Temperature:

  * Warning: 45°C
  * Critical: 65°C

* Gas:

  * Warning: 400 ppm
  * Critical: 600+ ppm

---

## 🎯 Hackathon Value

* Real-world **safety application**
* Combines **IoT + Web + Hardware + AI logic**
* Fast response system (<1ms isolation)
* Scalable for EVs, battery systems, industries

---


## 🔮 Future Improvements

* Add ML-based predictive detection
* Mobile app integration
* Cloud monitoring system
* Multi-battery support

---

## 📜 License

MIT License
