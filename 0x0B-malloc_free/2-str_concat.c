#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Concatenate two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer
**/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, len1 = 1, len2 = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	p = (char *)malloc(sizeof(char) * (len1 + len2 - 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1 - 1] = s2[i];
	p[len1 + len2 - 2] = '\0';
	return (p);
}
