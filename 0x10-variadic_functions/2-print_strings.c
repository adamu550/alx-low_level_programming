#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguments to concatenate
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (i && separator)
			printf("%s", separator);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
