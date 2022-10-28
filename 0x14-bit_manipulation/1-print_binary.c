#include"main.h"
/**
 *print_binary - int to binary
 *@n: int to convert
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 63, flag = 0, m = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	for (; i >= 0; i--)
	{
		m = n >> i;
		if (m & 1)
			flag = 1;
		if (flag == 1)
			_putchar((m & 1) + '0');
	}
}
