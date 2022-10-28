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
 *clear_bit - set the1 bit in the index
 *@n: int
 *@index: index
 *Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);
	x = ~_pow(index);
	*n =  *n & x;
		return (1);
	return (0);
}
