/**
 ****************************************************************************************************
 * @file        key.h
 * @author      JHX
 * @version     V1.0
 * @date        2023年3月30日
 * @brief       按键输入
 ****************************************************************************************************
 * @attention
 *
 ****************************************************************************************************
 */
#include "main.h"

#ifndef __KEY_H
#define __KEY_H


/******************************************************************************************/

#define KEY0        HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin)   
#define KEY1        HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)    
#define WK_UP       HAL_GPIO_ReadPin(WKUP_GPIO_Port, WKUP_Pin)   


#define KEY0_PRES    1              /* KEY0按下 */
#define KEY1_PRES    2              /* KEY1按下 */
#define WKUP_PRES    3              /* KEY_UP按下(即WK_UP) */

uint8_t key_scan(uint8_t mode);     /* 按键扫描函数 */

#endif


















