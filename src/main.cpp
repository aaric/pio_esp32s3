#include <Arduino.h>

///*
/////////////// ch02 LCD With TFT_eSPI ///////////////
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

// lib_deps = bodmer/TFT_eSPI@^2.5.43
void setup() {
    Serial.begin(9600);

    // 初始化屏幕
    tft.begin();
    // 设置屏幕旋转方向，这里设置为1，根据需要可调整
    tft.setRotation(1);
    // 填充屏幕为黑色
    tft.fillScreen(TFT_BLACK);
    // 设置文本颜色为白色，背景为黑色
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    // 设置字体大小
    tft.setTextSize(2);
    // 设置文本起始位置，x坐标和y坐标
    tft.setCursor(40, 60);
    // 打印"Hello World"
    tft.println("Hello World");
}

void loop() {
    Serial.println("lcd display");
    delay(1000);
}
//*/

/*
/////////////// ch01 blink ///////////////
#include "Freenove_WS2812_Lib_for_ESP32.h"

#define LEDS_COUNT 1
#define LEDS_PIN 48
#define CHANNEL 0

Freenove_ESP32_WS2812 strip =
        Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);

// lib_deps = freenove/Freenove WS2812 Lib for ESP32@^1.0.6
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
*/