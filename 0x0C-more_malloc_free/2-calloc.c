#include "main.h"
#include<stdlib.h>
/**
 *_calloc - calloc
 *@nmemb: long
 *@size: size of each space
 *Return: void;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
