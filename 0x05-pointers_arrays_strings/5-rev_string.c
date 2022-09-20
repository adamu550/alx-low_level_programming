#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to a string in reverse
 *
 * Return: stringLength
*/

void rev_string(char *s)
{
	int stringLength = 0, len = 0, i;
	char *newPointer = s, letter;

	while (*newPointer != '\0')
	{
		stringLength++;
		newPointer++;
	}
	len = stringLength - 1;
	for (i = 0 ; i < (len / 2) + 1; i++)
	{
		letter = s[i];
		s[i] = s[len - i];
		s[len - i] = letter;
	}
}
