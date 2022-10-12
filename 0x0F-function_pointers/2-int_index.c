#include "function_pointers.h"

/**
 * int_index - Search an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				break;
		if (i < size)
			return (i);
	}
	return (-1);
}
