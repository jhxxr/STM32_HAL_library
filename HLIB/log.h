/**
 ****************************************************************************************************
 * @file        led.h
 * @author      JHX
 * @version     V1.0
 * @date        2023��4��1��
 * @brief       ��ӡLOG�Ĵ���
 ****************************************************************************************************
 * @attention
 *      ͨ�����ڴ�ӡlog��ע��Ҫ�޸� &huartx 
 *
 ****************************************************************************************************
 */

#ifndef __LOG_H
#define __LOG_H

#include "main.h"
#include <stdio.h>
#include "usart.h"
#include "libgen.h" //name
#include <string.h>




//define 
#define USER_MAIN_DEBUG  //�ڲ���Ҫʱע�͵�
#define FILE_NAME (basename(__FILE__))
#ifdef USER_MAIN_DEBUG 
#define user_main_printf(format, ...) printf( format "\r\n", ##__VA_ARGS__) 
#define user_main_info(format, ...) printf("[\t%s]info:" format "\r\n",FILE_NAME, ## __VA_ARGS__) 
#define user_main_debug(format, ...) printf("[\t%s]debug:" format "\r\n",FILE_NAME, ## __VA_ARGS__) 
#define user_main_error(format, ...) printf("[\t%s]error:" format "\r\n",FILE_NAME,## __VA_ARGS__) 
#else 
#define user_main_printf(format, ...) 
#define user_main_info(format, ...) 
#define user_main_debug(format, ...) 
#define user_main_error(format, ...) 
#endif


//printf
int fputc(int ch, FILE *f){ 
	uint8_t temps[1] = {ch};
	HAL_UART_Transmit(&huart1, temps, 1, 2); //�޸�&huartx,��Ӧ����
	return ch; 
} 


char *basename(char *path) {
    char *s = strrchr(path, '/');
    return s ? s + 1 : path;
}





#endif

















