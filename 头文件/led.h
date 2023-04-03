/**
 ****************************************************************************************************
 * @file        led.h
 * @author      JHX
 * @version     V1.0
 * @date        2023��4��1��
 * @brief       LED ���Ƽ򻯴���
 ****************************************************************************************************
 * @attention
 *      ��ΪLED�Ŀ��ƴ���Ƚϼ򵥣����Կ���ֱ��д��main.c�У�����Ϊ�˴������ֲ�ԣ����ǵ���дһ���ļ�
 *
 ****************************************************************************************************
 */

#ifndef __LED_H
#define __LED_H

#include "main.h"
/******************************************************************************************/



#define LED0(x)   do{ x ? \
                      HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_RESET); \
                  }while(0)      /* LED0��ת */

#define LED1(x)   do{ x ? \
                      HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET); \
                  }while(0)      /* LED1��ת */


#define LED0_TOGGLE()   do{ HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin); }while(0)        //ȡ��
#define LED1_TOGGLE()   do{ HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin); }while(0)        //ȡ��
/* --------------------------------------------------------------------------------------------------- */



#endif

















