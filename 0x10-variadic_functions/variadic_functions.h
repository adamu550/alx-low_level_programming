#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>
/**
 * struct print - print type and print function
 * @char_to_compare: print type
 * @f: print function
 */
typedef struct print
{
	char *char_to_compare;
	void (*f)(va_list);
} print_t;

#endif
