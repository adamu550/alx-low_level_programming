#include <stdio.h>

/**
 * main - prints name of program
 *@argc:argument count
 *@argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int c;

	c = argc;

	for  (i = 0; i < c; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
