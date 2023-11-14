/*
 * Button.c
 *
 *  Created on: Nov 2, 2023
 *      Author: datph
 */

#include "Button.h"
// Exercise 5 ********
int KeyReg0[NUM_OF_BUTTON];
int KeyReg1[NUM_OF_BUTTON];
int KeyReg2[NUM_OF_BUTTON];
int KeyReg3[NUM_OF_BUTTON];
int BT1_flag;
int BT2_flag;
int BT3_flag;
int TimerForKeyPress = 200;


void initialButton() // KHỞI TẠO CÁC GIÁ TRỊ BAN ĐẦU
{
	// i = 0 (BT1), i = 1 (BT2), i = 3 (BT3)
	BT1_flag = 0;
	BT2_flag = 0;
	BT3_flag = 0;
	for (int i = 0; i < NUM_OF_BUTTON; i++)
	{
		KeyReg0[i] = NORMAL_STATE;
		KeyReg1[i] = NORMAL_STATE;
		KeyReg2[i] = NORMAL_STATE;
		KeyReg3[i] = NORMAL_STATE;
	}
}
int isButton1Pressed()
{
	if (BT1_flag == 1)
	{
		BT1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2Pressed()
{
	if (BT2_flag == 1)
	{
		BT2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed()
{
	if (BT3_flag == 1)
	{
		BT3_flag = 0;
		return 1;
	}
	return 0;
}
void getKeyInput()
{
	for (int i = 0; i < NUM_OF_BUTTON; i++)
	{
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		if (i == 0) KeyReg2[i] = HAL_GPIO_ReadPin(BT1_GPIO_Port, BT1_Pin);
		else if (i == 1) KeyReg2[i] = HAL_GPIO_ReadPin(BT2_GPIO_Port, BT2_Pin);
		else if (i == 2) KeyReg2[i] = HAL_GPIO_ReadPin(BT3_GPIO_Port, BT3_Pin);
		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i]))
		{
			if (KeyReg3[i] != KeyReg2[i]) // NHẤN THẢ
			{
				KeyReg3[i] = KeyReg2[i];
				if (KeyReg2[i] == PRESSED_STATE)
				{
					if (i == 0) BT1_flag = 1;
					else if (i == 1) BT2_flag = 1;
					else if (i == 2) BT3_flag = 1;
					TimerForKeyPress = 200;
				}
			}
			else // NHẤN GIỮ
			{
				TimerForKeyPress--;
				if (TimerForKeyPress == 0)
				{
					KeyReg3[i] = NORMAL_STATE;
					TimerForKeyPress = 200;
				}
			}
		}
	}
}
