#include "main.h"

/**
 *_strspn - find the bytes that match
 *@s: string
 *@accept: string to match with
 *Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
		{
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
