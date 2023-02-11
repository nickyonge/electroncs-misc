#include <Arduino.h>
#include <Wifi.h>

#if __has_include("privatedata.h")
#include "privatedata.h"
#define wifi_data_found true
#else
#include "privatedata-example.h"
#define wifi_data_found false
#endif

#define ssid _wifi_ssid
#define password _wifi_password

void setup(){
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  delay(100);
}

void loop(){
  Serial.print("RSSI: ");
  Serial.println(WiFi.RSSI());
  delay(2000);
}