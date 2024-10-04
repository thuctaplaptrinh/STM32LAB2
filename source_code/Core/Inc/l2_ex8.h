/*
 * l2_ex8.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Asus
 */

#ifndef INC_L2_EX8_H_
#define INC_L2_EX8_H_

#include "main.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timer8_run();

#endif /* INC_L2_EX8_H_ */
