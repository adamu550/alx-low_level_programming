#include"main.h"
/**
 *_puts_recursion - puts
 *@s: string
 *Return void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
