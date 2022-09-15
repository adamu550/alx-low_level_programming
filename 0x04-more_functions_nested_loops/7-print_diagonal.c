#include "main.h"

/**
* print_diagonal - print a diagonal line
* @n: Number of times the character '_'
* Return: void
*/

void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	for (i = 0; i < n; i++)
	{
	for (s = 0; s < i; s++)
	_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
	else
	_putchar('\n');
}
