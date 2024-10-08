#define BLYNK_TEMPLATE_ID "TMPL37ZS7dB7T"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "L1IxLpDFsLglDtwX2-LS4OgPv6EmvFHf"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Replace with your network credentials
char ssid[] = "abc";
char pass[] = "kunjuzz01";

// Replace with your Blynk Auth Token
char auth[] = "L1IxLpDFsLglDtwX2-LS4OgPv6EmvFHf";

// GPIO pin where the LED is connected
const int ledPin = 1;  // You can use GPIO number, e.g., 5 for D1 on NodeMCU

// Blynk virtual pin
#define VPIN V1

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Initialize Blynk
  Blynk.begin(auth, ssid, pass);

  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

// This function will be called every time the Blynk button widget is pressed
BLYNK_WRITE(VPIN)
{
  int buttonState = param.asInt(); // Get the state of the button
  digitalWrite(ledPin, buttonState); // Set the LED
}

void loop()
{
  // Run Blynk
  Blynk.run();
}