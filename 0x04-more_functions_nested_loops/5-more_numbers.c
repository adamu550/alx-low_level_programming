#include "main.h"

/**
* more_numbers -  Print numbers 0-14 ten times
*
* Return: void
*/
void more_numbers(void)
{
	int f, n;

	for (f = 0; f < 10; f++)
{
	for (n = 0; n <= 14; n++)
{
	if (n >= 10)
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}
_putchar('\n');
}
