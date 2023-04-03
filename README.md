# STM32 HAL库 代码移植
本代码库是为了方便学习STM32微控制器而创建的，包含了一些常用的代码示例，方便移植到自己的项目中。

本代码库使用STM32CubeMX进行配置，并使用HAL库编写代码。适用于初学者和有一定经验的开发者。

# 代码结构
代码库包含以下文件夹：

> `HEADERS`    头文件
> 
> >  `LED.h` LED灯简化操作   
> > 
> `EXTI` 中断   
> 
> `HLIB`
> 
> > `log.h` 方便打印调试信息，通过串口，但注意需要修改串口号  
> >  
> `KEY` 按键   
> `STM32_TFT_LCD` TFTLCD屏幕   
> `OLED` OLED屏幕   
# 如何使用
将代码库克隆到本地，复制到自己的文件夹，keil中配置一下即可使用。
```shell
git clone https://github.com/jhxxr/STM32_HAL_library.git
```