/*
 * led_display.c
 *
 *  Created on: Nov 9, 2023
 *      Author: datph
 */
#include "led_display.h"

void display7SEG(int num)
{
   	if (num == 0)
    {
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 1);
   	}
   	else if (num == 1)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 1);
   	}
   	else if (num == 2)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 3)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 4)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 5)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 6)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 7)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 1);
   	}
   	else if (num == 8)
    {
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
   	else if (num == 9)
   	{
   		HAL_GPIO_WritePin(SEG7_a_GPIO_Port, SEG7_a_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_b_GPIO_Port, SEG7_b_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_c_GPIO_Port, SEG7_c_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_d_GPIO_Port, SEG7_d_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_e_GPIO_Port, SEG7_e_Pin, 1);
   		HAL_GPIO_WritePin(SEG7_f_GPIO_Port, SEG7_f_Pin, 0);
   		HAL_GPIO_WritePin(SEG7_g_GPIO_Port, SEG7_g_Pin, 0);
   	}
}
void unEnableAll()
{
	HAL_GPIO_WritePin(SEG7_1_GPIO_Port, SEG7_1_Pin, 1);
	HAL_GPIO_WritePin(SEG7_2_GPIO_Port, SEG7_2_Pin, 1);
	HAL_GPIO_WritePin(SEG7_3_GPIO_Port, SEG7_3_Pin, 1);
	HAL_GPIO_WritePin(SEG7_4_GPIO_Port, SEG7_4_Pin, 1);
}
void update7SEG(int index)
{
	switch (index)
	{
		case 0:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_1_GPIO_Port, SEG7_1_Pin, 0);
			display7SEG(numLed1);
			break;
		case 1:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_2_GPIO_Port, SEG7_2_Pin, 0);
			display7SEG(numLed2);
			break;
		case 2:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_3_GPIO_Port, SEG7_3_Pin, 0);
			display7SEG(numLed3);
			break;
		case 3:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_4_GPIO_Port, SEG7_4_Pin, 0);
			display7SEG(numLed4);
			break;
		default:
			break;
	}
}
void led_on(int pin)
{
	HAL_GPIO_WritePin(GPIOA, pin, 0);
}
void led_off(int pin)
{
	HAL_GPIO_WritePin(GPIOA, pin, 1);
}
void blinkingLedRed()
{
	HAL_GPIO_TogglePin(Red1_GPIO_Port, Red1_Pin);
	HAL_GPIO_TogglePin(Red2_GPIO_Port, Red2_Pin);
}
void blinkingLedGreen()
{
	HAL_GPIO_TogglePin(Green1_GPIO_Port, Green1_Pin);
	HAL_GPIO_TogglePin(Green2_GPIO_Port, Green2_Pin);
}
void blinkingLedAmber()
{
	HAL_GPIO_TogglePin(Amber1_GPIO_Port, Amber1_Pin);
	HAL_GPIO_TogglePin(Amber2_GPIO_Port, Amber2_Pin);
}

