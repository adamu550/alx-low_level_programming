#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	if (argc == 1)
	{
		argc = 0;
		printf("%d\n", argc);
	}
	else
	{
		printf("%d\n", --argc);
	}
	return (0);
}
