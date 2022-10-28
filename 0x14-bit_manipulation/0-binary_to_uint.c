#include"main.h"
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
 *binary_to_uint - converts
 *@b: powerbinary number
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i = 0, base = 0;
	char *bc = (void *)b;

	if (!b)
		return (r);
	for (; bc[i]; i++)
		;
	i--;
	for (; bc[i]; i--, base++)
	{
		if (bc[i] != 48 && bc[i] != 49)
			return (0);
		if (bc[i] == 49)
			r = r + _pow(base);
	}
	return (r);
}
