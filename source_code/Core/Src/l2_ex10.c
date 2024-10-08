/*
 * l2_ex10.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Asus
 */

#include "l2_ex10.h"


int timer5_counter = 0;
int timer5_flag = 0;

int timer6_counter = 0;
int timer6_flag = 0;

void setTimer5(int duration){
	timer5_counter = duration;
	timer5_flag = 0;
}

void setTimer6(int duration){
	timer6_counter = duration;
	timer6_flag = 0;
}

void timer10_run(){
	if(timer5_counter > 0){
		timer5_counter--;
		if(timer5_counter == 0){
			timer5_flag = 1;
		}
	}
	if(timer6_counter > 0){
		timer6_counter--;
		if(timer6_counter == 0){
			timer6_flag = 1;
		}
	}
}

void shift_left()
{
	uint8_t temp = matrix_buffer[0];
	for (int i = 0; i < 7; i++)
	{
		matrix_buffer[i] = matrix_buffer[i+1];
	}
	matrix_buffer[7] = temp;
}
