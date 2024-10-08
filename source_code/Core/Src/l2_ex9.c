/*
 * l2_ex9.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Asus
 */

#include "l2_ex9.h"

int timer4_counter = 0;
int timer4_flag = 0;

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xff, 0x03, 0xED, 0xEE, 0xEE, 0xED, 0x03, 0xFF};

void setTimer4(int duration){
	timer4_counter = duration;
	timer4_flag = 0;
}

void timer9_run(){
	if(timer4_counter > 0){
		timer4_counter--;
		if(timer4_counter == 0){
			timer4_flag = 1;
		}
	}
}

void readBuffer(uint8_t buffer)
{
	if(buffer & 0x01) HAL_GPIO_WritePin ( ROW0_GPIO_Port ,ROW0_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW0_GPIO_Port ,ROW0_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x02) HAL_GPIO_WritePin ( ROW1_GPIO_Port ,ROW1_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW1_GPIO_Port ,ROW1_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x04) HAL_GPIO_WritePin ( ROW2_GPIO_Port ,ROW2_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW2_GPIO_Port ,ROW2_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x08) HAL_GPIO_WritePin ( ROW3_GPIO_Port ,ROW3_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW3_GPIO_Port ,ROW3_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x10) HAL_GPIO_WritePin ( ROW4_GPIO_Port ,ROW4_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW4_GPIO_Port ,ROW4_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x20) HAL_GPIO_WritePin ( ROW5_GPIO_Port ,ROW5_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW5_GPIO_Port ,ROW5_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x40) HAL_GPIO_WritePin ( ROW6_GPIO_Port ,ROW6_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW6_GPIO_Port ,ROW6_Pin, GPIO_PIN_RESET ) ;
	if(buffer & 0x80) HAL_GPIO_WritePin ( ROW7_GPIO_Port ,ROW7_Pin, GPIO_PIN_SET ) ;
	else HAL_GPIO_WritePin ( ROW7_GPIO_Port ,ROW7_Pin, GPIO_PIN_RESET ) ;
}

void updateLEDMatrix (int index )
{
	switch(index){
	case 0:
		readBuffer(matrix_buffer[0]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 1:
		readBuffer(matrix_buffer[1]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 2:
		readBuffer(matrix_buffer[2]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 3:
		readBuffer(matrix_buffer[3]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 4:
		readBuffer(matrix_buffer[4]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 5:
		readBuffer(matrix_buffer[5]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 6:
		readBuffer(matrix_buffer[6]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_SET ) ;
		break;
	case 7:
		readBuffer(matrix_buffer[7]);
		HAL_GPIO_WritePin ( ENM0_GPIO_Port ,ENM0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM1_GPIO_Port ,ENM1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM2_GPIO_Port ,ENM2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM3_GPIO_Port ,ENM3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM4_GPIO_Port ,ENM4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM5_GPIO_Port ,ENM5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM6_GPIO_Port ,ENM6_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( ENM7_GPIO_Port ,ENM7_Pin, GPIO_PIN_RESET ) ;
		break;
	default:
		break;
	}
}
