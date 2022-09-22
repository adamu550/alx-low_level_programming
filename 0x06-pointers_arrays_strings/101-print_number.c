#include"main.h"
/**
 *print_number - print number
 *@n: number to pritn;
 *Return: void
 */
void print_number(int n)
{
	int b = 1, i = 0, j;

	if (n < 0)
	{
		_putchar('-');
	}
	while (n / b > 9 || n / b < -9)
	{
		b = b * 10;
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (n < 0)
		{
			_putchar(-(n / b) + '0');
		}
		else
		{
			_putchar((n / b) + '0');
		}
		n = n % b;
		b = b / 10;
	}

}
