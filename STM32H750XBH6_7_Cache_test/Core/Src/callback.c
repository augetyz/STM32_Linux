//
// Created by augety on 23-10-8.
//
#include "callback.h"
#include <stdio.h>
#include "usart.h"
/*
 * 按键中断 PI4 下降沿中断 触发中断回调函数。
 * */

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if(GPIO_Pin==key_Pin)
    {
        while(HAL_GPIO_ReadPin(key_GPIO_Port,key_Pin)==0);
        led_1_GPIO_Port->ODR^=led_1_Pin;
        printf("The key is put\r\n");
    }
}





