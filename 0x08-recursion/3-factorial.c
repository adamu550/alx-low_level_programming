#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n:number
 * Return: returns factorial or -1.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n > 0)
	return (n * factorial(n - 1));
	return (1);
}
