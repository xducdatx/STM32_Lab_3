/*
 * led_display.h
 *
 *  Created on: Nov 9, 2023
 *      Author: datph
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_
#include "main.h"

#define Green1 GPIO_PIN_4
#define Amber1 GPIO_PIN_5
#define Red1   GPIO_PIN_6
#define Green2 GPIO_PIN_7
#define Amber2 GPIO_PIN_8
#define Red2   GPIO_PIN_9

extern int valueSEG12; // BIẾN LƯU GIÁ TRỊ HIỂN THỊ CỦA LED 7 ĐOẠN HIỂN THỊ TRÊN LED 1 VÀ 2 HIỆN TẠI, VÍ DỤ valueSEG12 = 3 -> SEG1 HIỂN THỊ 0, SEG2 HIỂN THỊ 3.
extern int valueSEG34; // BIẾN LƯU GIÁ TRỊ HIỂN THỊ CỦA LED 7 ĐOẠN HIỂN THỊ TRÊN LED 3 VÀ 4 HIỆN TẠI, VÍ DỤ valueSEG34 = 12 -> SEG3 HIỂN THỊ 1, SEG4 HIỂN THỊ 2.

void display7SEG(int num);
void update7SEG(int index);
void unEnableAll();
void led_on(int pin);
void led_off(int pin);
void updateClockBuffer();
void blinkingLedRed();
void blinkingLedGreen();
void blinkingLedAmber();
#endif /* INC_LED_DISPLAY_H_ */
