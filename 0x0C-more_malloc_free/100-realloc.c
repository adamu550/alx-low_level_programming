#include "main.h"
#include<stdlib.h>
/**
 *_realloc - realloc
 *@ptr: old pointer
 *@old_size: old_size
 *@new_size: new_size
 *Return: new puntero
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int i = 0;
	char *ptr1;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newp = malloc(new_size);
		return ((void *)(newp));
	}
	ptr1 = (char *)ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			newp[i] = ptr1[i];
	}
	free(ptr);
	return ((void *)(newp));
}
