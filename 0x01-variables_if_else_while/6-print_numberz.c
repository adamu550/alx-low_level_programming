#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: 0 success.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}

	putchar('\n');

	return (0);
}


