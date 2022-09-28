#include "main.h"

/**
 *_strlen_recursion - length of string
 *@s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
/**
 *compare - compare two chars
 *@s:string
 *@n:position 1 to compare
 *@l:position 2 to compare
 *Return: 1-=/0-!=
 */
int compare(char *s, int n, int l)
{
	if (s[n] == s[l] && l > n)
	{
		return (compare(s, ++n, --l));
	}
	else if	(s[n] == s[l])
		return (1);
	return (0);
}
/**
 *is_palindrome - verify if is a palindirme word
 *@s: the word
 *Return: 1-palindrome, 0- no palindrome
 */
int is_palindrome(char *s)
{
	int l = 0;
	int n = 0;

	if (*s == '\0')
	{
		return (1);
	}
	l = _strlen_recursion(s) - 1;
	return (compare(s, n, l));
}
