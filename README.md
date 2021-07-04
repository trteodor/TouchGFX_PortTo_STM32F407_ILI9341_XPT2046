In this project I ported TouchGFX to STM32F407G + ILI9341 + XPT2064

* I used Cube HAL and Low Level Driver (LL Library to drive SPI for optimization) 
* ILI9341 Connected via SPI + DMA 
 
* It works in my opinion very well and stable! :) 


External Links and sources:

Based on:
https://github.com/PeraZver/TouchGFX-Test

The ILI9341 Driver is Based on:
https://github.com/ScarsFun/lvgl_STM32F103_ILI9341_XPT2046
I modified a large part of this driver

XPT2064 Driver  is taken directly from:
https://kursstm32.pl/

Connections:

![Connections](https://github.com/trteodor/LVGL_Ported_TO_ILI9341_STM32F407/blob/master/IMG/Untitled%20Diagram.jpg)
![Visualisation](https://github.com/trteodor/LVGL_Ported_TO_ILI9341_STM32F407/blob/master/IMG/Opis%20Po%C5%82%C4%85cze%C5%84.PNG)
