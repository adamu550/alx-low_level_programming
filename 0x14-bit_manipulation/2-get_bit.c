#include "main.h"

/**
 *_pow - pow in 2 base
 *@i: power
 *Return: int
 */
int _pow(int i)
{
	int pow = 1, j = 0;

	for (; j < i; j++)
		pow = pow * 2;
	return (pow);
}
/**
 *get_bit - print the bit in the index
 *@n: int
 *@index: index
 *Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);
	x = _pow(index);
	if ((n & x) == x)
		return (1);
	return (0);
}
