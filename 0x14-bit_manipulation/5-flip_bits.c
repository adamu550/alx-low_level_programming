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
 *c_bit - set the1 bit in the index
 *@n: int
 *@index: index
 *Return: bit
 */
int c_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);
	x = ~_pow(index);
	n =  n & x;
		return (n);
	return (0);
}

/**
 *flip_bits - flip bits of 2 numbers
 *@n: 1 int
 *@m: 2 int
 *Return: Q flip bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux_n, aux_m;
	unsigned int cont = 0;
	int i = 63;

	for (; i >= 0; i--)
	{
		aux_n = n >> i;
		aux_m = m >> i;
		if (aux_n ^ aux_m)
		{
			cont++;
			n = c_bit(n, i);
			m = c_bit(m, i);
		}
	}
	return (cont);
}
