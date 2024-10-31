#include "sys.h"
#include "Bluetooth.h"	
#include "led.h"
#include "delay.h"
#include "dance.h"
#include "jingzou.h"
//�Ӿ�  ��·


//////////////////////////////////////////////////////////////////
//�������´���,֧��printf����,������Ҫѡ��use MicroLIB	  
#if 1
#pragma import(__use_no_semihosting)             
//��׼����Ҫ��֧�ֺ���    
extern u8 bt;
extern u8 i;
extern u8 j;
extern u8 a;
struct __FILE 
{ 
	int handle; 

}; 

FILE __stdout;       
//����_sys_exit()�Ա���ʹ�ð�����ģʽ    
_sys_exit(int x) 
{ 
	x = x; 
} 
//�ض���fputc���� 
int fputc1(int ch, FILE *f)
{      
	while((USART1->SR&0X40)==0);//ѭ������,ֱ���������   
    USART1->DR = (u8) ch;      
	return ch;
}
#endif 

/*ʹ��microLib�ķ���*/
 /* 
int fputc(int ch, FILE *f)
{
	USART_SendData(USART1, (uint8_t) ch);

	while (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET) {}	
   
    return ch;
}
int GetKey (void)  { 

    while (!(USART1->SR & USART_FLAG_RXNE));

    return ((int)(USART1->DR & 0x1FF));
}
*/
 
#if EN_USART1_RX   //���ʹ���˽���
//����1�жϷ������
//ע��,��ȡUSARTx->SR�ܱ���Ī������Ĵ���   	
u8 USART_RX_BUF[USART_REC_LEN];     //���ջ���,���USART_REC_LEN���ֽ�.
//����״̬
//bit15��	������ɱ�־
//bit14��	���յ�0x0d
//bit13~0��	���յ�����Ч�ֽ���Ŀ
u16 USART_RX_STA=0;       //����״̬���	  
  
void bluetooth_init(u32 bound){
  //GPIO�˿�����
  GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1|RCC_APB2Periph_GPIOA, ENABLE);	//ʹ��USART1��GPIOAʱ��
  
	//USART1_TX   GPIOA.9
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9; //PA.9
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//�����������
  GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ��GPIOA.9
   
  //USART1_RX	  GPIOA.10��ʼ��
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;//PA10
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;//��������
  GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ��GPIOA.10  

  //Usart1 NVIC ����
  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3;//��ռ���ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;		//�����ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQͨ��ʹ��
	NVIC_Init(&NVIC_InitStructure);	//����ָ���Ĳ�����ʼ��VIC�Ĵ���
  
   //USART ��ʼ������

	USART_InitStructure.USART_BaudRate = bound;//���ڲ�����
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//�ֳ�Ϊ8λ���ݸ�ʽ
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//һ��ֹͣλ
	USART_InitStructure.USART_Parity = USART_Parity_No;//����żУ��λ
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//��Ӳ������������
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//�շ�ģʽ

  USART_Init(USART1, &USART_InitStructure); //��ʼ������1
  USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);//�������ڽ����ж�
  USART_Cmd(USART1, ENABLE);                    //ʹ�ܴ���1 

}
  
u8 b=0;  //U3����
void USART1_IRQHandler(void)                	//����1�жϷ������
	{
	  u8 Res;
		
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)  //�����ж�
		{
			USART_ClearITPendingBit(USART1,USART_IT_RXNE);
		  Res=USART_ReceiveData(USART1);	//��ȡ���յ�������
			USART_SendData(USART1,Res);//�ش����յ�������			
			while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);//�ȴ��������
			delay_ms(10);
			//
			if(Res=='1')
			{
				zoulu();
			}
			else if(Res=='2')//��ת
			{
				zuozhuan1031_rubbish();
				USART_SendData(UART4,Res);
			}
			else if(Res=='3')//��ת
			{
				youzhuan1031();
				USART_SendData(UART4,Res);
			}
			else if(Res=='4')//Ӧ���Ǿ�����
			{	
				raise_left_hands();
				USART_SendData(UART4,Res);
			}
			else if(Res=='5')  //������
			{	
				raise_right_hands();
				USART_SendData(UART4,Res);
			}
			else if(Res=='6')  //̧����
			{	
				  left_foot();
					USART_SendData(UART4,Res);
			}
			else if(Res=='7')  //̧����
			{	
				 right_foot();
				 USART_SendData(UART4,Res);
			}
			else if(Res=='8')  //��˫��
			{	
				raise_both_hands();
				USART_SendData(UART4,Res);
			}
			else if(Res=='9')  //ҡͷ
			{	
				shift_head();
				USART_SendData(UART4,Res);
			}
			else if(Res=='0')  //��Խ
			{	
				kuayue1031();
				USART_SendData(UART4,Res);
			}
//			else if(Res=='7'/*&&i==0&&k==1&&f==0*/)  //��ת
//			{	
//				guizhong3();
//				yuandiyou();
//			
//				USART_SendData(UART4,Res);
//			}
//			else if(Res=='8'/*&&i==0&&k==1*/)//ֱ����ת
//			{	
//				zuozhuanzhi();
//				//yuandizuo2();
//				USART_SendData(UART4,Res);
//				//f=1;
//			}
//			else if(Res=='9'/*&&i==0&&k==1*/)//ֱ����ת
//			{	
//				youzhuanzhi();
//				//yuandiyou();
//				USART_SendData(UART4,Res);
//				//f=1;
//			}

			USART_RX_STA=0;
		
     }
} 
#endif	

