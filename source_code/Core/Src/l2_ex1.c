#include "l2_ex1.h"
void display7SEG(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_SET ) ;
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_SET ) ;
		break;
	case 2:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	case 3:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	case 4:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	case 5:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	case 6:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	case 7:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_SET ) ;
		break;
	case 8:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	case 9:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port ,SEG0_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_GPIO_Port ,SEG1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_GPIO_Port ,SEG2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_GPIO_Port ,SEG3_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_GPIO_Port ,SEG4_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_GPIO_Port ,SEG5_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_GPIO_Port ,SEG6_Pin, GPIO_PIN_RESET ) ;
		break;
	default:
		break;
	}
}

//int timer1_counter = 0;
//int timer1_flag = 0;
//
//int timer2_counter = 0;
//int timer2_flag = 0;
//
//void setTimer1(int duration)
//{
//	timer1_counter = duration;
//	timer1_flag = 0;
//}
//
//void setTimer2(int duration)
//{
//	timer2_counter = duration;
//	timer2_flag = 0;
//}
//
//void timer1Run()
//{
//	if(timer1_counter > 0){
//		timer1_counter--;
//		if(timer1_counter <= 0){
//			timer1_flag = 1;
//		}
//	}
//	if(timer2_counter > 0){
//		timer2_counter--;
//		if(timer2_counter <= 0){
//			timer2_flag = 1;
//		}
//	}
//	if(timer3_counter > 0){
//		timer3_counter--;
//		if(timer3_counter <= 0){
//			timer3_flag = 1;
//		}
//	}
//}
