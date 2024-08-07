
#include<stdio.h>
#include <stdint.h>


#define	RCC_BASE	0x40021000
#define	PORTA_BASE	0x40010800

#define	RCC_APB2ENR	*((volatile uint32_t *)(RCC_BASE + 0x18))
#define GPIOA_CRH	*((volatile uint32_t *)(PORTA_BASE + 0x04))
#define GPIOA_ORD	*((volatile uint32_t *)(PORTA_BASE + 0x0c))

extern void NMI_Handler(void)
{
	
}
extern void H_fault_Handler(void)
{
	
}

int main(void)

{
	
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &=0xff0fffff;
	GPIOA_CRH |=0x00200000;
	int x;
	
	
	/* Loop forever */
	while(1)
	{
	GPIOA_ORD |= 1<<13;
	for(x=0;x<5000;x++);
	GPIOA_ORD &=~(1<<13);
	for(x=0;x<5000;x++);

	}
	return 0;
}