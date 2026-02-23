# 🏠 ESP8266 Home Automation using Blynk IoT
# 📌 Introduction

This project demonstrates a WiFi-based Home Automation System using NodeMCU (ESP8266) and the Blynk IoT Cloud Platform.

It allows users to control 4 electrical appliances remotely using the Blynk mobile application from anywhere in the world.

The system is simple, scalable, and beginner-friendly for IoT enthusiasts.
<br>
<br>
# ⚙️ How It Works

**1.** The ESP8266 connects to a WiFi network.

**2.** It authenticates with Blynk Cloud Server.

**3.** When a button is pressed in the Blynk mobile app:

**•** A virtual pin (V0–V3) sends a signal.

**•** ESP8266 receives the signal.

**•** The corresponding relay turns ON or OFF.

**4.** Relays control AC appliances like lights, fans, or sockets.
<br>
<br>
# 🔌 Components Used
| Component                   | Quantity    |
| --------------------------- | ----------- |
| NodeMCU (ESP8266)           | 1           |
| 4-Channel Relay Module (5V) | 1           |
| Jumper Wires                | As required |
| Breadboard                  | 1           |
| Power Supply (5V)           | 1           |
| Blynk IoT Mobile App        | 1           |
<br>
<br>
# 🧠 Explanation of the Code
<br>
1️⃣ Blynk Configuration

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

```cpp
BLYNK_WRITE(V0)
```

When the button in the Blynk app changes state: 

``` 1 ``` → Relay ON (LOW signal because relay is active LOW)

``` 0 ``` → Relay OFF (HIGH signal)

# 4️⃣ Setup Function

**•** Sets relay pins as OUTPUT.

**•** Turns all relays OFF initially.

**•** Connects to WiFi and Blynk Cloud.

# 5️⃣ Loop Function

```cpp
Blynk.run();
```

Keeps the device connected and listens for commands.
<br>
<br>
# 🌍 Applications

**•** Smart Home Automation

**•** Remote Light Control

**•** IoT Learning Projects

**•** Office Appliance Control

**•** Hostel/Room Automation

**•** Energy Management Systems
<br>
<br>
# 🔐 Safety Notice

⚠️ This project controls high-voltage AC appliances.
Ensure:

**•** Proper insulation

**•** Safe wiring

**•** Use of protective casing

**•** Avoid touching live wires
<br>
<br>
# 📱 Blynk App Configuration

**•** Create a new Template in Blynk IoT

**•** Add 4 Button Widgets

**•** Assign Virtual Pins V0–V3

**•** Set button mode to **Switch**
<br>
<br>
# 📷 Project Preview

<br>
<br>
# 📜 License

This project is open-source and free to use for educational purposes.
