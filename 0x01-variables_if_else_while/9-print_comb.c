#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: 0 success.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}

	putchar('\n');

	return (0);
}


