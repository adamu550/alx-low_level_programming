#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array
 *@size: size of array
 *@c: char to fill the array with
 *Return: p
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return ('\0');
	}
	for (; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
