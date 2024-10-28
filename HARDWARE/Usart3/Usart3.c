#include "Usart3.h"
#include "LED.h"
#include "delay.h"
#include "dance.h"
#include "stm32f10x.h"
#include "jingzou.h"
//�Ӿ�  ��ά��  Խ��

#if EN_USART3_RX   //���ʹ���˽���
//����3�жϷ������
//ע��,��ȡUSARTx->SR�ܱ���Ī������Ĵ���   	
u8 USART3_RX_BUF[USART3_REC_LEN];     //���ջ���,���USART_REC_LEN���ֽ�.
//����״̬
//bit15��	������ɱ�־
//bit14��	���յ�0x0d
//bit13~0��	���յ�����Ч�ֽ���Ŀ
u16 USART3_RX_STA=0;       //����״̬���	  
extern u8 sj;
extern u8 i;
extern u8 b;
u8 cs;
void Uart3_init(u32 bound)
	{
  //GPIO�˿�����
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	//ʹ�� GPIOB ʱ��
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);//ʹ�� USART3 ʱ��
	
	USART_DeInit(USART3);  //��λ����3
	//USART3_TX   GPIOB.10
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10; //PB.10
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//�����������
  GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��GPIOB.10
   
  //USART3_RX	  GPIOB.11��ʼ��
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;//PB.11
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;//��������
  GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��GPIOB.11  

  //USART3 NVIC ����
  NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=0 ;//��ռ���ȼ�0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;		//�����ȼ�0
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQͨ��ʹ��
	NVIC_Init(&NVIC_InitStructure);	//����ָ���Ĳ�����ʼ��VIC�Ĵ���
  
   //USART ��ʼ������

	USART_InitStructure.USART_BaudRate = bound;//���ڲ�����
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//�ֳ�Ϊ8λ���ݸ�ʽ
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//һ��ֹͣλ
	USART_InitStructure.USART_Parity = USART_Parity_No;//����żУ��λ
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//��Ӳ������������
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//�շ�ģʽ

  USART_Init(USART3, &USART_InitStructure); //��ʼ������3
  USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);//�������ڽ����ж�
  USART_Cmd(USART3, ENABLE);                    //ʹ�ܴ���3 

}

u8 e=0;
u8 xiao=0;
u8 l=0;
void USART3_IRQHandler(void)                	//����3�жϷ������(�Ӿ�ģ��)
{
		u8 Res;
	
	#if SYSTEM_SUPPORT_OS 		//���SYSTEM_SUPPORT_OSΪ�棬����Ҫ֧��OS.
	OSIntEnter();    
#endif
	
		if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET)  //�����ж�
		{
//			USART_ClearITPendingBit(USART3,USART_IT_RXNE);
		  Res=USART_ReceiveData(USART3);	//��ȡ���յ�������
			USART_SendData(UART4,Res);//�ش����յ�������			
			while(USART_GetFlagStatus(USART3,USART_FLAG_TC)!=SET);//�ȴ��������
			delay_ms(10);
			if(Res=='1'&&e==1)
			{
				yuandiyouxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
			
				e=0;
			}
			else if(Res=='2'&&e==1)
			{
				yuandiyouxiao();
				yuandiyouxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
			//qibu();
				e=0;
			}
			else if(Res=='3'&&e==1)
			{
				yuandiyouxiao();
				yuandiyouxiao();
				yuandiyouxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
			//qibu();
				e=0;
			}
			if(Res=='5')//Խ��
			{	
				guizhong2();
				//yuezhang();
				guizhong();
				//zoulu();
				USART_SendData(UART4,Res);
				e=1;
				xiao=1;
				for(l=0;l<7;l++)
				{
					ceshizuo();
				}
			}
			else if(Res=='6'&&e==1)
			{
				yuandizuoxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				
				e=0;
			}
			else if(Res=='7'&&e==1)
			{
				yuandizuoxiao();
				yuandizuoxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				//qibu();
				e=0;
			}
			else if(Res=='8'&&e==1)
			{
				yuandizuoxiao();
				yuandizuoxiao();
				yuandizuoxiao();
				yuezhang2();
				USART_SendData(UART4,Res);
				//qibu();
				e=0;
			}
			
			//��ά��
			else if(Res=='A')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'A');
				delay_ms(800);
				//qibu();
			}
			else if(Res=='B')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'B');
				delay_ms(800);
				//qibu();
			}
			else if(Res=='C')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'C');
				delay_ms(800);
				//qibu();
			}
			else if(Res=='D')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'D');
				delay_ms(800);
				//qibu();
			}
			else if(Res=='E')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'E');
				delay_ms(800);
			//	qibu();
			}
			else if(Res=='F')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'F');
				delay_ms(800);
				//qibu();
			}
			else if(Res=='G')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'G');
				delay_ms(800);
				//qibu();
				//zoulu();
			}
			else if(Res=='H')
			{	
				guizhong2();
				guizhong();
				USART_SendData(UART4,'H');
				delay_ms(800);
				//qibu();
				//zoulu();
			}
		  b=1;
     }
}

/*
void Uart3_Printf(const char *buf)
{
	u8 len = strlen(buf);
	while (len--) {
		while ((USART3->SR & 0x40) == 0);//TCλΪ0�����ݻ�û�з���
		USART_SendData(USART3,*buf++);
	}
}

void USART3_Send_Byte(uint16_t Data)
{ 
          USART_SendData(USART3,Data);
          while(USART_GetFlagStatus(USART3, USART_FLAG_TC) == RESET);	 //����û�з����ڴ�ͣ��
}
*/
//void Usart3_Send_CC(uint16_t numb)
//{
//    USART3_Send_Byte(0xAA);
//	  USART3_Send_Byte(0xFD);
//	  USART3_Send_Byte(numb);
//	  USART3_Send_Byte(0x00);
//	  USART3_Send_Byte(0xDF);

//}



#endif	
