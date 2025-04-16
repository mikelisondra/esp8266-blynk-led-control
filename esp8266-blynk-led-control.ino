// Define Blynk template info BEFORE including any Blynk libraries

#define BLYNK_TEMPLATE_ID "" // Enter the Blynk template ID
#define BLYNK_TEMPLATE_NAME "" // Enter the Blynk template name
#define BLYNK_AUTH_TOKEN "" // Enter the Blynk auth token

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = ""; // Enter the WIFI name
char pass[] = ""; // Enter the WIFI password

// Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt());
}
BLYNK_WRITE(V1) {
  digitalWrite(D1, param.asInt());
}

void setup() {
  Serial.begin(115200); //for debugging`
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
