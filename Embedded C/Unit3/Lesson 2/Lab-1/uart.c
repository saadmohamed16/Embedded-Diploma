#include "uart.h"

#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void Uart_Send_string(unsigned char *pt_string)
{
	while(*pt_string != '\0')
	{
		UART0DR = (unsigned int)(*pt_string);
		pt_string++;
	}
}