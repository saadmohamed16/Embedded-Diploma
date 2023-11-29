#include "uart.h"

unsigned char string_buffer[100] = "Learn-in-Depth:<Saad>";
void main (void)
{
	Uart_Send_string(string_buffer);
}