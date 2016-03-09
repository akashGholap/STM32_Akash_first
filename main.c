#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
GPIO_InitTypeDef gpioakash;
int main(void)
{   RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
    gpioakash.GPIO_Mode=GPIO_Mode_OUT;
    gpioakash.GPIO_Speed=GPIO_Speed_2MHz;
    gpioakash.GPIO_PuPd=GPIO_PuPd_NOPULL;
    gpioakash.GPIO_Pin=GPIO_Pin_12;

   GPIO_Init(GPIOD,&gpioakash);
  int count=0;


    while(1)
    {
    	GPIO_SetBits(GPIOD,GPIO_Pin_12);
        while(count<1000000)
        {
        	count++;
        }
        count=0;
    	GPIO_ResetBits(GPIOD,GPIO_Pin_12);
    	 while(count<1000000)
    	        {
    	        	count++;
    	        }
    	        count=0;


    }
}
