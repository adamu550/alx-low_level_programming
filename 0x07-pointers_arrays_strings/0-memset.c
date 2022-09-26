#include "main.h"

/**
 *_memset - fill array
 *@s: buffer
 *@b: the char to fill with
 *@n: the number or spaces to fill
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
