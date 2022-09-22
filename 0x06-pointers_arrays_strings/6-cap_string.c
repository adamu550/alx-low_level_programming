#include "main.h"

/**
 *cap_string - capitalize the first letter of each word
 *@s: the string
 *Return: s
 */
char *cap_string(char *s)
{
	int i = 0, n = 0;
	char a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 0};

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (n = 0; n <= 13; n++)
			{
				if (a[n] == s[i - 1])
				{
					s[i] = s[i] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
