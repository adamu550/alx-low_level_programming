#include "main.h"
int _strlen(char *s);

/**
 * _strstr - function strstr
 * @haystack: char
 * @needle: char
 * Return: (haystack - len) or '\0'
*/

char *_strstr(char *haystack, char *needle)
{
	int len = _strlen(needle);
	char *ref = needle;

	while (*haystack && *ref)
	{
		if (*haystack++ == *ref)
		{
			ref++;
		}
		if (!*ref)
		{
			return (haystack - len);
		}
		if (len == (ref - needle))
		{
			ref = needle;
		}
	}

	return ('\0');
}



/**
 * _strlen - checks length of str
 * @s: char
 * Return: length of s
*/

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);

}
