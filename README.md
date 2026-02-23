# 🏠 ESP8266 Home Automation using Blynk IoT
# 📌 Introduction

This project demonstrates a WiFi-based Home Automation System using NodeMCU (ESP8266) and the Blynk IoT Cloud Platform.

It allows users to control 4 electrical appliances remotely using the Blynk mobile application from anywhere in the world.

The system is simple, scalable, and beginner-friendly for IoT enthusiasts.

# ⚙️ How It Works

**1.** The ESP8266 connects to a WiFi network.

**2.** It authenticates with Blynk Cloud Server.

**3.** When a button is pressed in the Blynk mobile app:

**•** A virtual pin (V0–V3) sends a signal.

**•** ESP8266 receives the signal.

**•** The corresponding relay turns ON or OFF.

**4.** Relays control AC appliances like lights, fans, or sockets.

# 🔌 Components Used
| Component                   | Quantity    |
| --------------------------- | ----------- |
| NodeMCU (ESP8266)           | 1           |
| 4-Channel Relay Module (5V) | 1           |
| Jumper Wires                | As required |
| Breadboard                  | 1           |
| Power Supply (5V)           | 1           |
| Blynk IoT Mobile App        | 1           |

# 🧠 Explanation of the Code
# 1️⃣ Blynk Configuration

**•** Template ID

**•** Template Name

**•** Auth Token

**•** WiFi Credentials

These connect the ESP8266 to the Blynk Cloud.

# 2️⃣ Relay Pin Definitions
```cpp
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3
```

Each relay is connected to a digital pin of NodeMCU.

# 3️⃣ Virtual Pin Control

``` BLYNK_WRITE(V0) ```

When the button in the Blynk app changes state: 

1 → Relay ON (LOW signal because relay is active LOW)

0 → Relay OFF (HIGH signal)
