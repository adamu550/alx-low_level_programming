#include "main.h"
/**
 *_atoi - char to int
 *@s: the string
 *Return: int
 */

int _atoi(char *s)
{
	unsigned int i = 0, mcont = 0, n = 0, ncont = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			mcont++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = ((n * ncont) + s[i] - '0');
			ncont = 10;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}
	if (mcont % 2 != 0)
	{
		n = -n;
	}
	return (n);
}
