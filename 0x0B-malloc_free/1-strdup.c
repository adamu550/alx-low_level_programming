#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - Return a pointer to a new string
 * @str: String
 * Return: pointer
**/

char *_strdup(char *str)
{
	char *p;
	unsigned int i, len = 1;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	p = malloc(sizeof(*str) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = str[i];
	return (p);
}
