#include "main.h"

/**
 *_strcmp - compare
 *@s1: char 1
 *@s2:  char 2
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}
