/*
  Project: ESP8266 Based 4-Channel Home Automation using Blynk IoT
  Board  : NodeMCU (ESP8266)
  Author : Your Name
  Description:
  This project controls 4 relays (appliances) remotely using the
  Blynk IoT mobile application over WiFi.
*/

// ==================== BLYNK CONFIGURATION ====================
#define BLYNK_TEMPLATE_ID ""        // Enter your Blynk Template ID
#define BLYNK_TEMPLATE_NAME ""      // Enter your Template Name
#define BLYNK_PRINT Serial          // Enables debug prints via Serial Monitor

#include <ESP8266WiFi.h>            // ESP8266 WiFi library
#include <BlynkSimpleEsp8266.h>     // Blynk library for ESP8266

#define BLYNK_AUTH_TOKEN ""         // Enter your Blynk Auth Token

char auth[] = BLYNK_AUTH_TOKEN;     // Authentication token
char ssid[] = "";                   // Enter your WiFi Name (SSID)
char pass[] = "";                   // Enter your WiFi Password

// ==================== RELAY PIN DEFINITIONS ====================
// D0–D3 are used to control 4 relays
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3

// ==================== BLYNK VIRTUAL PIN HANDLERS ====================

// When button on V0 changes state
BLYNK_WRITE(V0) {
  bool value1 = param.asInt();   // Get value from app (0 or 1)

  if (value1 == 1) {
    digitalWrite(relay1, LOW);   // Turn ON relay (Active LOW)
  } else {
    digitalWrite(relay1, HIGH);  // Turn OFF relay
  }
}

// When button on V1 changes state
BLYNK_WRITE(V1) {
  bool value2 = param.asInt();

  if (value2 == 1) {
    digitalWrite(relay2, LOW);
  } else {
    digitalWrite(relay2, HIGH);
  }
}

// When button on V2 changes state
BLYNK_WRITE(V2) {
  bool value3 = param.asInt();

  if (value3 == 1) {
    digitalWrite(relay3, LOW);
  } else {
    digitalWrite(relay3, HIGH);
  }
}

// When button on V3 changes state
BLYNK_WRITE(V3) {
  bool value4 = param.asInt();

  if (value4 == 1) {
    digitalWrite(relay4, LOW);
  } else {
    digitalWrite(relay4, HIGH);
  }
}

// ==================== SETUP FUNCTION ====================
void setup() {

  Serial.begin(9600);  // Start Serial Monitor for debugging

  // Set relay pins as OUTPUT
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // Turn OFF all relays initially (Active LOW relay module)
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  // Connect to Blynk Cloud
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

// ==================== MAIN LOOP ====================
void loop() {
  Blynk.run();  // Keep Blynk connection alive
}