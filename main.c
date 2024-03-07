#include<stm32f10x.h>

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//开启APB2的时钟
	
	GPIO_InitTypeDef a;
	a.GPIO_Mode=GPIO_Mode_Out_PP;
	a.GPIO_Pin=GPIO_Pin_0 ;
	a.GPIO_Speed=GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOA,&a);//GPIO初始化
	
	GPIO_SetBits(GPIOA, GPIO_Pin_0);//将PA0配置为高电平
	
	while(1)
	{
		
	}
	return 0;
}
