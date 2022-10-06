#include "main.h"
#include<stdlib.h>
/**
 *array_range - array of int
 *@min: min
 *@max: max
 *Return: *p
 */
int *array_range(int min, int max)
{
	int i = 0, l = 0;
	int *p;

	if (min > max)
		return (NULL);
	l = (max - min);
	if (l < 0)
		l = -l;
	p = malloc(sizeof(int) * (l + 1));
	if (p == NULL)
		return (NULL);
	for (; i <= l; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
