/**
 ****************************************************************************************************
 * @file        exti.c
 * @author      xr
 * @version     V1.0
 * @date        2023��3��30��
 * @brief       �ⲿ�ж�
 ****************************************************************************************************
 * @attention
 *             ����ʹ��
 *
 ****************************************************************************************************
 */


#include "main.h"
#include "exti.h"
#include "LED.h"



/**
 * @brief       �жϷ����������Ҫ��������
                ��HAL�������е��ⲿ�жϷ�����������ô˺���
 * @param       GPIO_Pin:�ж����ź�
 * @retval      ��
 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    HAL_Delay(20);      /* ���� */
    switch(GPIO_Pin)
    {
        case KEY0_Pin:
            if (KEY0 == 0)
            {
                LED0_TOGGLE();  /* LED0 ״̬ȡ�� */ 
                LED1_TOGGLE();  /* LED1 ״̬ȡ�� */ 
            }
            break;
        case KEY1_Pin:
            if (KEY1 == 0)
            {
                LED0_TOGGLE();  /* LED0 ״̬ȡ�� */ 
            }
            break;
        case WKUP_Pin:
            if (WK_UP == 1)
            {
                LED1_TOGGLE();  /* LED1 ״̬ȡ�� */ 
            }
            break;
    }
}












