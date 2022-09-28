#include "main.h"

/**
 *div- divides tge number to find if its a divisor
 *@n: the number
 *@num: the possible divisor
 *Return: 1 - 0
 */
int div(int n, int num)
{
	if (n % num != 0 && num == n)
	{
		return (div(n, ++num));
	}
	else if (n % num == 0 && n != num)
	{
		return (0);
	}
	return (1);
}
/**
 *is_prime_number - find if it is a prime number
 *@n:the number to evaluate
 *Return: 1 - 0
 */
int is_prime_number(int n)
{
	int num = 2;

	if (n > 1)
	{
		return (div(-n, num));
	}
	return (0);
}
