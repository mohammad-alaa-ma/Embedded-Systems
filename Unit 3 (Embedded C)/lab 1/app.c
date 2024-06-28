#include <uart.h>
unsigned char string_buffer[100] = "learn-in-depth with me##";
void main(void)
{
	Uart_Send_string(string_buffer);
}