/*
 * l2_ex5.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Asus
 */

#include "l2_ex5.h"

int hour = 12, minute = 59, second = 50;
void updateClockBuffer()
{
	if(hour < 10){
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}
	if(hour >= 10){
		led_buffer[0] = hour/10;
		led_buffer[1] = hour%10;
	}
	if(minute < 10){
		led_buffer[2] = 0;
		led_buffer[3] = minute;
	}
	if(minute >= 10){
		led_buffer[2] = minute/10;
		led_buffer[3] = minute%10;
	}
}
