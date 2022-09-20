#include "main.h"
#include <stdio.h>
/**
 * puts_half - Print every other character of a string
 *
 * @str: String to print
 *
 * Return: void
*/

void puts_half(char *str)
{
	int stringLength = 0, i;
	char *newPointer = str;

	while (*newPointer != '\0')
	{
		stringLength++;
		newPointer++;
	}

	if (stringLength % 2 == 1)
		i = (stringLength + 1) / 2;
	else
		i = stringLength / 2;
	for (; i < stringLength; i++)
		printf("%c", str[i]);
	printf("\n");
}
