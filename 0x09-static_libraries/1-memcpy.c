#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: return memory area
 *@src: memory area to copy
 *@n: bytes of the memory
 *
 *Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
