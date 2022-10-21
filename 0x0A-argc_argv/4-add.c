#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: Arguement count
 * @argv: Array of pointers to arguement strings
 * Return: 0 or 1
 **/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
