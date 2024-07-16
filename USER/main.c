#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "usart.h"
#include "exit.h" 
#include "pwm.h" 
#include "uart.h"
#include "LobotSerialServo.h"
#include "bool.h"
#include "Bluetooth.h"
#include "dance.h"
#include "Uart4.h"
#include "Usart3.h"
#include "jingzou.h"
#include "stm32f10x.h"
#include <stdio.h>

u8 bt=0;
u8 sj=0;
u8 i=0;
u8 j=0;
u8 a=0;
extern u8 Res;
int main(void)
 {
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
  delay_init();	    	  														//��ʱ������ʼ��	 
	uartInit(115200);//���	  
	LED_Init();
	bluetooth_init(9600);  //����
	servo_init();
	Uart3_init(9600);
	Uart4_init(9600);
	LED0=0;
	LED1=0;	 
	//delay_ms(1005); 
  //guizhong();
	//qibu();
  while(1)
	{
		USART_SendData(USART3,Res);
    if(Res == '1')
		{
		zoulu();
		}
		else if(Res=='2')
		{
		zuozhuan();
		}
		else if(Res == '3')
		{
		youzhuan();
		}
		else if(Res == '4')
		{
		gostraight_while_slightly_turn_left();
		}
	}
	
 }
