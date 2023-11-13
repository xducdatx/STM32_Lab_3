/*
 * software_timer.h
 *
 *  Created on: Oct 2, 2023
 *      Author: datph
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timer1Run();
void timer2Run();
void timer3Run();
#endif /* INC_SOFTWARE_TIMER_H_ */
