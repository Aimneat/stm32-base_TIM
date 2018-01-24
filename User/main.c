/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2015-xx-xx
  * @brief   ���ƶ����ˮ��
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:����  STM32 F429 ������ 
  * ��̳    :http://www.chuxue123.com
  * �Ա�    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
#include "stm32f4xx.h"
#include "bsp_led.h"
#include "bsp_basic_tim.h"



int main(void)
{
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();
	
	BASIC_TIMx_Config();
	while (1)
	{

	}
}


// �ǳ���ĳ�ʹ�� TIM7


/*********************************************END OF FILE**********************/
