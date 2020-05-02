#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>
#include <WiFiManager.h>

#define Switch D2

void setup() {
  Serial.begin (9200);
  Serial.println("\n starting");
  pinMode (Switch,INPUT_PULLUP);

}

void loop() {
  if (digitalRead(Switch)==LOW){
    WiFiManager wifiManager;
      if (!wifiManager.startConfigPortal("setup wifi"))
      delay(3000);
      ESP.reset();
      delay(5000);
    }

}
