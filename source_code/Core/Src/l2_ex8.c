/*
 * l2_ex8.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Asus
 */

#include "l2_ex8.h"

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

int timer3_counter = 0;
int timer3_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}

void setTimer3(int duration){
	timer3_counter = duration;
	timer3_flag = 0;
}

void timer8_run(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0){
			timer1_flag = 1;
		}
	}
	if(timer2_counter > 0){
		timer2_counter--;
		if(timer2_counter == 0){
			timer2_flag = 1;
		}
	}
	if(timer3_counter > 0){
		timer3_counter--;
		if( timer3_counter == 0){
			timer3_flag = 1;
		}
	}
}
