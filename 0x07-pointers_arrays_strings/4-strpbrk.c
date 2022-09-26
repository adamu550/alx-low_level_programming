#include "main.h"
#include <stddef.h>


/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: substring
 *@accept: initial string
 *
 *Return: &s[i] or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	return (NULL);
}
