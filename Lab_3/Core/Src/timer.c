/*
 * timer.c
 *
 *  Created on: Nov 9, 2023
 *      Author: datph
 */

#ifndef SRC_TIMER_C_
#define SRC_TIMER_C_
#include "main.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2){
		button_reading();
	}
}
#endif /* SRC_TIMER_C_ */
