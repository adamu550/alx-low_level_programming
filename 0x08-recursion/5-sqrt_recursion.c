#include "main.h"

/**
 *base - find the base
 *@n: number
 *@b: the number to compare
 *Return: base found
*/
int base(int n, int b)
{
	if ((b * b) != n && b <= n / 2)
	{
		return (base(n, ++b));
	}
	else if (b * b == n)
	{
		return (b);
	}
	return (-1);
}
/**
*_sqrt_recursion - find the sqrt root of a number
*@n: number
*Return: base;
*/
int _sqrt_recursion(int n)
{
	int b = 0;

	return (base(n, ++b));
}
