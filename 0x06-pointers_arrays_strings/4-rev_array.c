#include "main.h"

/**
 *reverse_array - reverse array
 *@a: array
 *@n: length of array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int aux = 0, i = 0;

	while (n > i)
	{
		aux = a[n - 1];
		a[n - 1] = a[i];
		a[i] = aux;
		i++;
		n--;
	}
}
