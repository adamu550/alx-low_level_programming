#include <stdio.h>

/**
* main - print the largest prime factor of a given number
*
* Return: 0
*/

int main(void)
{
	long int i, number = 612852475143;

	for (i = 2; i < number / 2 + 1; i++)
	if (number % i == 0)
	{
	number /= i;
	i--;
	}
	printf("%li", number);
	printf("\n");
	return (0);
}
