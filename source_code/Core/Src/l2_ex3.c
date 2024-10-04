/*
 * l2_ex3.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Asus
 */

#include "l2_ex3.h"

const int MAX_LED = 4;
//int index_led = 0;
int led_buffer[4] = {1,2,3,4};

void update7SEG(int index)
{
	switch ( index ) {
	case 0:
		// Display the first 7 SEG with led_buffer [0]
		display7SEG(led_buffer[0]);
		HAL_GPIO_WritePin ( EN0_GPIO_Port ,EN0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( EN1_GPIO_Port ,EN1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN2_GPIO_Port ,EN2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN3_GPIO_Port ,EN3_Pin, GPIO_PIN_SET ) ;
		break ;
	case 1:
		// Display the second 7 SEG with led_buffer [1]
		display7SEG(led_buffer[1]);
		HAL_GPIO_WritePin ( EN0_GPIO_Port ,EN0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN1_GPIO_Port ,EN1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( EN2_GPIO_Port ,EN2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN3_GPIO_Port ,EN3_Pin, GPIO_PIN_SET ) ;
		break ;
	case 2:
		// Display the third 7 SEG with led_buffer [2]
		display7SEG(led_buffer[2]);
		HAL_GPIO_WritePin ( EN0_GPIO_Port ,EN0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN1_GPIO_Port ,EN1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN2_GPIO_Port ,EN2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( EN3_GPIO_Port ,EN3_Pin, GPIO_PIN_SET ) ;
		break ;
	case 3:
		// Display the forth 7 SEG with led_buffer [3]
		display7SEG(led_buffer[3]);
		HAL_GPIO_WritePin ( EN0_GPIO_Port ,EN0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN1_GPIO_Port ,EN1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN2_GPIO_Port ,EN2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( EN3_GPIO_Port ,EN3_Pin, GPIO_PIN_RESET ) ;
		break ;
	default :
		break ;
	}
}
