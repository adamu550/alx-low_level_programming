#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
