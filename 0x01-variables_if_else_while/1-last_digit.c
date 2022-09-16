#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main- checks if the last digit of a number
 *  is greater than five, zero or less than six
 *
 *  Return: 0 success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	last_digit = n % 10;

	if (last_digit > 5)

		printf("Last digit of %i is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
	printf("Last digit of %i is %d and is 0\n", n, last_digit);

	else
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, last_digit);

	/* your code goes there */
	return (0);
}
