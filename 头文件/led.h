/**
 ****************************************************************************************************
 * @file        led.h
 * @author      JHX
 * @version     V1.0
 * @date        2023年4月1日
 * @brief       LED 控制简化代码
 ****************************************************************************************************
 * @attention
 *      因为LED的控制代码比较简单，所以可以直接写在main.c中，但是为了代码的移植性，还是单独写一个文件
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
                  }while(0)      /* LED0翻转 */

#define LED1(x)   do{ x ? \
                      HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET); \
                  }while(0)      /* LED1翻转 */


#define LED0_TOGGLE()   do{ HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin); }while(0)        //取反
#define LED1_TOGGLE()   do{ HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin); }while(0)        //取反
/* --------------------------------------------------------------------------------------------------- */



#endif

















