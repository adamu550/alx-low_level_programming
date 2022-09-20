#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array of integers
 *
 * @a: Array
 * @n: Number of elements of the array
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
