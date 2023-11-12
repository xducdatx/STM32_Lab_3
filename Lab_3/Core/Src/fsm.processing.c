/*
 * fsm.processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: datph
 */

#include "fsm_processing.h"

enum TypeOfMode{Initial, MODE1, MODE2, MODE3, MODE4};
enum TypeOfMode Mode = Initial;

void fsm_processing()
{
	// TĂNG MODE KHI BUTTON 1 ĐƯỢC NHẤN
	switch(Mode)
	{
	case Initial:
		if (isButton1Pressed() == 1)
		{
			Mode = MODE1;
		}
		break;
	case MODE1:
		if (isButton1Pressed == 1)
		{
			Mode = MODE2;
		}
		break;
	case MODE2:
		if (isButton1Pressed == 1)
		{
			Mode = MODE3;
		}
		break;
	case MODE3:
		if (isButton1Pressed == 1)
		{
			Mode = MODE4;
		}
		break;
	case MODE4:
		if (isButton1Pressed == 1)
		{
			Mode = MODE1;
		}
		break;
	default:
		break;
	}

	//
}
