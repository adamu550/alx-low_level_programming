#include "main.h"

/**
* print_square - Print a square
* @size: Number of times the character '_'
* Return: void
*/

void print_square(int size)
{
	int i, m;

	if (size > 0)
	for (i = 0; i < size; i++)
	{
	for (m = 0; m < size; m++)
	_putchar('#');
	_putchar('\n');
	}
	else
	_putchar('\n');
}
