///*
// * Button.c
// *
// *  Created on: Nov 2, 2023
// *      Author: datph
// */
//
//#include "Button.h"
//
//int KeyReg0 = NORMAL_STATE;
//int KeyReg1 = NORMAL_STATE;
//int KeyReg2 = NORMAL_STATE;
//
//int KeyReg3 = NORMAL_STATE;
//int TimerForKeyPress = 200;
//
//void subKeyProcess()
//{
//}
//
//void getKeyInput()
//{
//	KeyReg0 = KeyReg1;
//	KeyReg1 = KeyReg2;
//	KeyReg2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
//	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2))
//	{
//		if (KeyReg3 != KeyReg2)
//		{
//			KeyReg3 = KeyReg2;
//			if (KeyReg2 == PRESSED_STATE)
//			{
//				subKeyProcess();
//				TimerForKeyPress = 200;
//			}
//		}
//		else
//		{
//			TimerForKeyPress--;
//			if (TimerForKeyPress == 0)
//			{
//				KeyReg3 = NORMAL_STATE;
//			}
//		}
//	}
//}
