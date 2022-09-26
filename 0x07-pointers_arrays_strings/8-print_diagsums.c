#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print sum
 *@a: matriz
 *@size: size
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum = 0, i, sizea = size - 1, sizex = size * size, sizeb = size + 1;

	for (i = 0; i < sizex; i = (i + sizeb))
	{
		sum = sum + a[i];
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = (sizex - size); i > 0; i = (i - sizea))
	{
		sum = sum + a[i];
	}
	printf("%d\n", sum);
}
