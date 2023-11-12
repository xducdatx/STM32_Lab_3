/*
 * fsm.processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: datph
 */

#include "fsm_processing.h"

enum TypeOfMode{Initial, MODE1, MODE2, MODE3, MODE4};
enum TypeOfMode Mode = Initial;

int index = 0;
void fsm_processing()
{
	// TĂNG MODE KHI BUTTON 1 ĐƯỢC NHẤN
	switch(Mode)
	{
	case Initial:
		if (isButton1Pressed() == 1)
		{
			Mode = MODE1;
			break;
		}
		numLed1 = 8;
		numLed2 = 8;
		numLed3 = 8;
		numLed4 = 8;
		if (timer1_flag == 1)
		{
			if (index > 3) index = 0;
			update7SEG(index++);
			setTimer1(25);
		}
		break;
	case MODE1:
		if (isButton1Pressed == 1)
		{
			Mode = MODE2;
			break;
		}
		if (timer2_flag == 1)
		{

		}
		if (timer1_flag == 1)
		{
			if (index > 3) index = 0;
			update7SEG(index++);
			setTimer1(25);
		}
		break;
	case MODE2:
		if (isButton1Pressed == 1)
		{
			Mode = MODE3;
			break;
		}
		break;
	case MODE3:
		if (isButton1Pressed == 1)
		{
			Mode = MODE4;
			break;
		}
		break;
	case MODE4:
		if (isButton1Pressed == 1)
		{
			Mode = MODE1;
			break;
		}
		break;
	default:
		break;
	}

	//
}
