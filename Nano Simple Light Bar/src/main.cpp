#include <Arduino.h>

#define HAS_ON_SWITCH true
#define ON_SWITCH_PIN 13

void setup()
{

    Serial.begin(9600);

    if (HAS_ON_SWITCH)
    {
        pinMode(ON_SWITCH_PIN, INPUT);
    }
}

void loop()
{
    // put your main code here, to run repeatedly:

    if (digitalRead(ON_SWITCH_PIN)) {
        Serial.println("ON");
    } else {
        Serial.println("OFF");

    }
}