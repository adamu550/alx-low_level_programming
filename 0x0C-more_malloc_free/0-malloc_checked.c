#include "main.h"
#include<stdlib.h>
/**
 *malloc_checked - check malloc
 *@b: size
 *Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	int a = 98;

	p = malloc(b);
	if (p == NULL)
	{
		p = &a;
		exit(98);
	}
	return (p);
}
