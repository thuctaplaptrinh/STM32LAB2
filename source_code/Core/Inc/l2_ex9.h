/*
 * l2_ex9.h
 *
 *  Created on: Oct 4, 2024
 *      Author: Asus
 */

#ifndef INC_L2_EX9_H_
#define INC_L2_EX9_H_

#include "main.h"

extern uint8_t matrix_buffer [8];
extern 	int index_led_matrix;

extern int timer4_flag;

void setTimer4(int duration);
void timer9_run();

void readBuffer(uint8_t buffer);
void updateLEDMatrix (int index );

#endif /* INC_L2_EX9_H_ */
