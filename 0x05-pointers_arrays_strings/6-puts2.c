#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 *
 * @str: String to print
 *
 * Return: void
*/

void puts2(char *str)
{
	int stringLength = 0, i;
	char *newPointer = str;

	while (*newPointer != '\0')
	{
		stringLength++;
		newPointer++;
	}
	for (i = 0; i < stringLength; i += 2)
		printf("%c", str[i]);
	printf("\n");
}
