#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: Pointer to a string
 *
 * Return: stringLength
*/

int _strlen(char *s)
{
	int stringLength = 0;

	while (*s != '\0')
	{
		s++;
		stringLength++;
	}
	return (stringLength);
}
