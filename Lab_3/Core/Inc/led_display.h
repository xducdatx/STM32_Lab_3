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

extern int numLed1;
extern int numLed2;
extern int numLed3;
extern int numLed4;

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
