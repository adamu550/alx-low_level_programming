#include "main.h"
#include <stddef.h>

/**
 *_strchr - Locate a character in a string
 *@s: string
 *@c: character in the string
 *
 *Return: &s[i] or 0
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
