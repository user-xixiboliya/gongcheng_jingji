#include "led.h"


//��ʼ��PA5��PA4Ϊ�����.��ʹ���������ڵ�ʱ��		    , PB6����ʹ�ã�������
//LED IO��ʼ��
void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ��PB,PA�˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;				 //LED0-->PC.6 �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIOA.4
 GPIO_ResetBits(GPIOC,GPIO_Pin_6);						 //PA.4 �����
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;	    		 //PC.7 �˿�����, �������
 GPIO_Init(GPIOC, &GPIO_InitStructure);	  				 //������� ��IO���ٶ�Ϊ50MHz
 GPIO_ResetBits(GPIOC,GPIO_Pin_7); 						 //PA.5 �����


}
 

