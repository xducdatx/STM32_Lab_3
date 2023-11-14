/*
 * fsm.processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: datph
 */

/*
 * fsm.processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: datph
 */

#include "fsm_processing.h"

enum TypeOfMode{Initial, MODE1, MODE2, MODE3, MODE4};
enum TypeOfMode Mode = Initial;

// BIẾN STATUS DÙNG ĐỂ LƯU TRẠNG THÁI CỦA ĐÈN GIAO THÔNG STATUS = 0(ĐỎ), 1(VÀNG), 2(XANH)
int status1 = 0;
int status2 = 2;
// BIẾN COUNT DÙNG ĐỂ ĐẾM LÙI THỜI GIAN CỦA ĐÈN
int count1 = 0;
int count2 = 0;
int Index = 0;
// TIMERED, TIMEGREEN, TIMEAMBER THỜI GIAN HIỂN THỊ CỦA ĐÈN GIAO THÔNG
int timeRed = 5;
int timeGreen = 3;
int timeAmber = 2;
int timeRedTemp;
int timeGreenTemp;
int timeAmberTemp;
void fsm_processing()
{
	// TĂNG MODE KHI BUTTON 1 ĐƯỢC NHẤN
	switch(Mode)
	{
	case Initial:
		// ĐỌC NÚT NHẤN VÀ XỬ LÍ KHI NHẬN ĐƯỢC TÍN HIỆU
		if (timer3_flag == 1)
		{
			getKeyInput();
			setTimer3(1);
		}
		if (isButton1Pressed() == 1)
		{
			Mode = MODE1;
			Index = 0;
			break;
		}
		// HIỂN THỊ LED 7 ĐOẠN
		if (timer1_flag == 1)
		{
			if (Index > 3) Index = 0;
			update7SEG(Index++);
			setTimer1(25);
		}
		break;
	case MODE1:
		// ĐỌC NÚT NHẤN VÀ XỬ LÍ KHI NHẬN ĐƯỢC TÍN HIỆU
		if (timer3_flag == 1)
		{
			getKeyInput();
			setTimer3(1);
		}
		if (isButton1Pressed() == 1)
		{
			Mode = MODE2;
			timeRedTemp = timeRed;
			Index = 0;
			break;
		}
		if (timer2_flag == 1)// HIỂN THỊ LED ĐƠN + CẬP NHẬT GIÁ TRỊ CHO LED 7 ĐOẠN
		{
			//LED TRÊN DƯỚI
			if (count1 == 0)
			{
				if (status1 == 0) // RED
				{
					led_on(Red1);
					led_off(Green1);
					led_off(Amber1);
					status1 = 2;
					count1 = timeRed;
				}
				else if (status1 == 1) // AMBER
				{
					led_off(Red1);
					led_on(Amber1);
					led_off(Green1);
					status1 = 0;
					count1 = timeAmber;
				}
				else if (status1 == 2) // GREEN
				{
					led_off(Red1);
					led_off(Amber1);
					led_on(Green1);
					status1 = 1;
					count1 = timeGreen;
				}
			}

			//LED TRÁI PHẢI

			if (count2 == 0)
			{
				if (status2 == 0) // RED
				{
					led_on(Red2);
					led_off(Green2);
					led_off(Amber2);
					status2 = 2;
					count2 = timeRed;
				}
				else if (status2 == 1) // AMBER
				{
					led_off(Red2);
					led_on(Amber2);
					led_off(Green2);
					status2 = 0;
					count2 = timeAmber;
				}
				else if (status2 == 2) // GREEN
				{
					led_off(Red2);
					led_off(Amber2);
					led_on(Green2);
					status2 = 1;
					count2 = timeGreen;
				}
			}
			count1--;
			count2--;
			valueSEG12 = count1;
			valueSEG34 = count2;
			updateClockBuffer();
			setTimer2(100);
		}
		if (timer1_flag == 1) // HIỂN THỊ LED 7 ĐOẠN
		{
			if (Index > 3) Index = 0;
			update7SEG(Index++);
			setTimer1(25);
		}
		break;
	case MODE2:
		// ĐỌC NÚT NHẤN VÀ XỬ LÍ KHI NHẬN ĐƯỢC TÍN HIỆU
		if (timer3_flag == 1)
		{
			getKeyInput();
			setTimer3(1);
		}
		if (isButton1Pressed() == 1)
		{
			Mode = MODE3;
			timeAmberTemp = timeAmber;
			Index = 0;
			break;
		}
		if (isButton2Pressed() == 1)
		{
			if(timeRedTemp > 0 && timeRedTemp < 99)
			timeRedTemp++;
		}
		if (isButton3Pressed() == 1)
		{
			timeRed = timeRedTemp;
		}
		led_off(Green1);
		led_off(Green2);
		led_off(Amber1);
		led_off(Amber2);
		valueSEG12 = 2;
		valueSEG34 = timeRedTemp;
		updateClockBuffer();
		if (timer1_flag == 1) // HIỂN THỊ LED 7 ĐOẠN
		{
			if (Index > 3) Index = 0;
			update7SEG(Index++);
			setTimer1(25);
			blinkingLedRed();
		}
		break;
	case MODE3:
		// ĐỌC NÚT NHẤN VÀ XỬ LÍ KHI NHẬN ĐƯỢC TÍN HIỆU
		if (timer3_flag == 1)
		{
			getKeyInput();
			setTimer3(1);
		}
		if (isButton1Pressed() == 1)
		{
			Mode = MODE4;
			timeGreenTemp = timeGreen;
			Index = 0;
			break;
		}
		if (isButton2Pressed() == 1)
		{
			if(timeAmberTemp > 0 && timeAmberTemp < 99)
			timeAmberTemp++;
		}
		if (isButton3Pressed() == 1)
		{
			timeAmber = timeAmberTemp;
		}
		led_off(Red1);
		led_off(Red2);
		led_off(Green1);
		led_off(Green2);
		valueSEG12 = 3;
		valueSEG34 = timeAmberTemp;
		updateClockBuffer();
		if (timer1_flag == 1) // HIỂN THỊ LED 7 ĐOẠN
		{
			if (Index > 3) Index = 0;
			update7SEG(Index++);
			setTimer1(25);
			blinkingLedAmber();
		}
		break;
	case MODE4:
		// ĐỌC NÚT NHẤN VÀ XỬ LÍ KHI NHẬN ĐƯỢC TÍN HIỆU
		if (timer3_flag == 1)
		{
			getKeyInput();
			setTimer3(1);
		}
		if (isButton1Pressed() == 1)
		{
			if (timeRed == timeGreen + timeAmber)
			{
				Mode = MODE1;
			}
			else
			{
				Mode = Initial;
				timeRed = 5;
				timeGreen = 3;
				timeAmber = 2;
				valueSEG12 = 88;
				valueSEG34 = 88;
				updateClockBuffer();
			}
			count1 = 0;
			count2 = 0;
			status1 = 0;
			status2 = 2;
			led_off(Red1);
			led_off(Red2);
			led_off(Green1);
			led_off(Green2);
			led_off(Amber1);
			led_off(Amber2);
			Index = 0;
			break;
		}
		if (isButton2Pressed() == 1)
		{
			if(timeGreenTemp > 0 && timeGreenTemp < 99)
			timeGreenTemp++;
		}
		if (isButton3Pressed() == 1)
		{
			timeGreen = timeGreenTemp;
		}
		led_off(Red1);
		led_off(Red2);
		led_off(Amber1);
		led_off(Amber2);
		valueSEG12 = 4;
		valueSEG34 = timeGreenTemp;
		updateClockBuffer();
		if (timer1_flag == 1) // HIỂN THỊ LED 7 ĐOẠN
		{
			if (Index > 3) Index = 0;
			update7SEG(Index++);
			setTimer1(25);
			blinkingLedGreen();
		}
		break;

	default:
		break;
	}
	//
}
