#include <Arduino.h>

#define HAS_ON_SWITCH true
#define ON_SWITCH_PIN 13
#define ON_SWITCH_MODE OUTPUT

#define HAS_BRIGHTNESS_POT true
#define BRIGHTNESS_POT_PIN A2
#define BRIGHTNESS_POT_MODE OUTPUT
#define DEFALUT_BRIGHTNESS 400 // 0-1024, used if bright pot pin is unset

void setup()
{

    Serial.begin(9600);

#ifdef HAS_ON_SWITCH
    pinMode(ON_SWITCH_PIN, ON_SWITCH_MODE);
#endif

#ifdef HAS_BRIGHTNESS_POT
    pinMode(BRIGHTNESS_POT_PIN, BRIGHTNESS_POT_MODE);
#endif

}

void loop()
{
    // put your main code here, to run repeatedly:

#ifdef HAS_ON_SWITCH
    bool active = digitalRead(ON_SWITCH_PIN);
#else
    bool active = true;
#endif

    // int brightness = analogRead(BRIGHTNESS_POT_PIN);
    int brightness = active ? analogRead(BRIGHTNESS_POT_PIN) : 0;

    Serial.print("active: ");
    Serial.println(active);
    Serial.print("brightness: ");
    Serial.println(brightness);
    delay(250);
}