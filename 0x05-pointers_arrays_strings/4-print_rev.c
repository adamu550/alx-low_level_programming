#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 *
 * @s: Pointer to a string in reverse
 *
 * Return: stringLength
*/

void print_rev(char *s)
{
	int stringLength = 0;

	while (s[stringLength] != '\0')
		stringLength++;
	stringLength--;
	while (stringLength >= 0)
	{
		printf("%c", s[stringLength]);
		stringLength--;
	}
	printf("\n");
}
