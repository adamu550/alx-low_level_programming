#include "main.h"

/**
*_strncat - concat strings
 *@dest: the 1st string
 *@src: the 2nd string
 *@n: number of character to concat
 *Return: dest;
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
