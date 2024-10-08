/*
 * l2_ex10.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Asus
 */

#ifndef INC_L2_EX10_H_
#define INC_L2_EX10_H_

#include "main.h"
#include "l2_ex9.h"

extern int timer5_flag;
extern int timer6_flag;

void setTimer5(int duration);
void setTimer6(int duration);
void timer10_run();

void shift_left();

#endif /* INC_L2_EX10_H_ */
