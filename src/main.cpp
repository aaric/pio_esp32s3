#include <Arduino.h>
#include "Freenove_WS2812_Lib_for_ESP32.h"

#define LEDS_COUNT 1
#define LEDS_PIN 48
#define CHANNEL 0

Freenove_ESP32_WS2812 strip =
        Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);

void setup() {
    Serial.begin(9600);

    strip.begin();
    strip.setBrightness(20);
}

void loop() {
    Serial.println("led blink");
    delay(1000);

    for (int j = 0; j < 255; j += 2) {
        for (int i = 0; i < LEDS_COUNT; i++) {
            strip.setLedColorData(i, strip.Wheel((i * 256 / LEDS_COUNT + j) & 255));
        }
        strip.show();
        delay(10);
    }
}