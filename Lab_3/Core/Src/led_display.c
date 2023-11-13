/*
 * led_display.c
 *
 *  Created on: Nov 9, 2023
 *      Author: datph
 */
#include "led_display.h"


void display7SEG(int num) // HIỆN THỊ LED 7 ĐOẠN
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
int led_buffer[4] = {8, 8, 8, 8};
void unEnableAll() // SET TẤT CẢ CÁC LED TẮT NHỜ ĐẶT CHÂN CONTROL LÊN 1
{
	HAL_GPIO_WritePin(SEG7_1_GPIO_Port, SEG7_1_Pin, 1);
	HAL_GPIO_WritePin(SEG7_2_GPIO_Port, SEG7_2_Pin, 1);
	HAL_GPIO_WritePin(SEG7_3_GPIO_Port, SEG7_3_Pin, 1);
	HAL_GPIO_WritePin(SEG7_4_GPIO_Port, SEG7_4_Pin, 1);
}
void update7SEG(int index) // QUÉT LED
{
	switch (index)
	{
		case 0:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_1_GPIO_Port, SEG7_1_Pin, 0);
			display7SEG(led_buffer[0]);
			break;
		case 1:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_2_GPIO_Port, SEG7_2_Pin, 0);
			display7SEG(led_buffer[1]);
			break;
		case 2:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_3_GPIO_Port, SEG7_3_Pin, 0);
			display7SEG(led_buffer[2]);
			break;
		case 3:
			unEnableAll();
			HAL_GPIO_WritePin(SEG7_4_GPIO_Port, SEG7_4_Pin, 0);
			display7SEG(led_buffer[3]);
			break;
		default:
			break;
	}
}
int valueSEG12;
int valueSEG34;
void updateClockBuffer() // CẬP NHẬT GIÁ TRỊ CHO BUFFER
{
	if (valueSEG12 <= 9)
	{
		led_buffer[0] = 0;
		led_buffer[1] = valueSEG12;
	}
	else
	{
		led_buffer[0] = valueSEG12 / 10;
		led_buffer[1] = valueSEG12 % 10;
	}
	if (valueSEG34 <= 9)
	{
		led_buffer[2] = 0;
		led_buffer[3] = valueSEG34;
	}
	else
	{
		led_buffer[2] = valueSEG34 / 10;
		led_buffer[3] = valueSEG34 % 10;
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

