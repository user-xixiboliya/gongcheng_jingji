#ifndef __USART3_H
#define __USART3_H
#include "stdio.h"
#include "string.h"	
#include "sys.h" 
#include "LED.h"

#define USART4_REC_LEN  			200  	//�����������ֽ��� 200
//#define EN_USART4_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����
	  	
extern u8  USART4_RX_BUF[USART4_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART4_RX_STA;         		//����״̬���	

void Uart4_init(u32 bound);
void Uart4_Printf(const char *buf);
void USART4_IRQHandler(void) ;
void USART4_Send_Byte(uint8_t Data);


#endif
