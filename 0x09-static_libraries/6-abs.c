#include "main.h"

/**
 *_abs-calculate the absolute valute of an integer
 * @n: integer
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
