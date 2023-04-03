/**
 ****************************************************************************************************
 * @file        exti.c
 * @author      xr
 * @version     V1.0
 * @date        2023年3月30日
 * @brief       外部中断
 ****************************************************************************************************
 * @attention
 *             方便使用
 *
 ****************************************************************************************************
 */


#include "main.h"
#include "exti.h"
#include "LED.h"



/**
 * @brief       中断服务程序中需要做的事情
                在HAL库中所有的外部中断服务函数都会调用此函数
 * @param       GPIO_Pin:中断引脚号
 * @retval      无
 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    HAL_Delay(20);      /* 消抖 */
    switch(GPIO_Pin)
    {
        case KEY0_Pin:
            if (KEY0 == 0)
            {
                LED0_TOGGLE();  /* LED0 状态取反 */ 
                LED1_TOGGLE();  /* LED1 状态取反 */ 
            }
            break;
        case KEY1_Pin:
            if (KEY1 == 0)
            {
                LED0_TOGGLE();  /* LED0 状态取反 */ 
            }
            break;
        case WKUP_Pin:
            if (WK_UP == 1)
            {
                LED1_TOGGLE();  /* LED1 状态取反 */ 
            }
            break;
    }
}












