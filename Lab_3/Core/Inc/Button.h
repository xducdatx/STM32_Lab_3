/*
 * Button.h
 *
 *  Created on: Nov 2, 2023
 *      Author: datph
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

//void subKeyProcess();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
