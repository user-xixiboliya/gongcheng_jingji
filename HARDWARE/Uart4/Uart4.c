#include "Uart4.h"
#include "LED.h"
#include "delay.h"
#include "dance.h"
#include "stm32f10x.h"
#include "jingzou.h"
#include "Usart3.h"
//����
//#endif EN_USART4_RX
//#if EN_USART4_RX   //���ʹ���˽���
extern u8 i;
extern u8 a;
//ע��,��ȡUSARTx->SR�ܱ���Ī������Ĵ���   	
u8 USART4_RX_BUF[USART4_REC_LEN];     //���ջ���,���USART_REC_LEN���ֽ�.
//����״̬
//bit15��	������ɱ�־
//bit14��	���յ�0x0d
//bit13~0��	���յ�����Ч�ֽ���Ŀ
u16 USART4_RX_STA=0;       //����״̬���	  
extern u8 sj;
u8 Res;
void Uart4_init(u32 bound)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef  NVIC_InitStructure;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC|RCC_APB2Periph_AFIO, ENABLE);
	
	USART_DeInit(UART4);  //��λ����4
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	USART_InitStructure.USART_BaudRate = bound;
	USART_InitStructure.USART_WordLength =USART_WordLength_8b;//???8?
	USART_InitStructure.USART_StopBits =USART_StopBits_1;//???1?
	USART_InitStructure.USART_Parity = USART_Parity_No;//??????
	USART_InitStructure.USART_HardwareFlowControl= USART_HardwareFlowControl_None;//???????
	USART_InitStructure.USART_Mode =USART_Mode_Rx | USART_Mode_Tx;//TX?RX???
	
	USART_Init(UART4, &USART_InitStructure); //��ʼ������4
	USART_ITConfig(UART4, USART_IT_RXNE, ENABLE);
	USART_Cmd(UART4, ENABLE);
	USART_ClearFlag(UART4,USART_FLAG_TC);
	
	//Usart4 NVIC ����
  NVIC_InitStructure.NVIC_IRQChannel = UART4_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3 ;//��ռ���ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;		//�����ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQͨ��ʹ��
	NVIC_Init(&NVIC_InitStructure);	//����ָ���Ĳ�����ʼ��VIC�Ĵ���
}
void UART4_IRQHandler(void)                	//����4�жϷ������
	{
		if(USART_GetITStatus(UART4, USART_IT_RXNE) != RESET)  //�����ж�
		{
			u8 Res1; 
			//USART_ClearITPendingBit(UART4,USART_IT_RXNE);
			Res1 = USART_ReceiveData(UART4);	//��ȡ���յ�������
			USART_SendData(UART4,Res);
		  //while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);//�ȴ��������
			//delay_ms(100);
			Res = Res1;
		}
//		if(Res=='1')
//			{
//				zoulu();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='2')//��ת
//			{	
//				zuozhuan();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='3')  //��ת
//			{	
//				youzhuan();
//				//USART_SendData(UART4,Res);
//			}
//			else if(Res=='4')//��ά��
//			{	
//				gostraight_while_slightly_turn_left();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='5')//Խ��
//			{	
//				yuezhang2();
//				guizhong();
//				qibu2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='6')//ԭ����ת
//			{	
//				yuandizuo2();
//				qibu2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='7')//ԭ����ת
//			{	
//				yuandiyou();
//				qibu2();
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='8')//ֱ����ת
//			{	
//				zuozhuanzhi();
//				//yuandizuo2();
//				USART_SendData(UART4,Res);
//				//f=1;
//			}
//			else if(Res=='9')//ֱ����ת
//			{	
//        //youzhuanzhi();
//				//yuandiyou();
//				USART_SendData(UART4,Res);
//				ceshi();
//				//f=1;
//			}
			//a=0;
	}
	
	void USART4_Send_Byte(uint8_t Data)
{ 
          USART_SendData(UART4,Data);
          while(USART_GetFlagStatus(UART4, USART_FLAG_TC) == RESET);	 //�ȴ����ͽ���
}