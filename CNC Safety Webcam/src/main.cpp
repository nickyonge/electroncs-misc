#include <Arduino.h>

#if __has_include("privatedata.h")
#include "privatedata.h"
#else
#include "privatedata-example.h"
#endif

#define ssid _wifi_ssid
#define password _wifi_password

void setup(){
}

void loop(){
}