/*
 * l2_ex6.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Asus
 */

#include "l2_ex6.h"

int timer0_counter = 0;
int timer0_flag = 0;

void setTimer0(int duration){
	timer0_counter = duration;
	timer0_flag = 0;
}

void timer6_run(){
	if(timer0_counter > 0){
		timer0_counter--;
		if( timer0_counter == 0){
			timer0_flag = 1;
		}
	}
}
