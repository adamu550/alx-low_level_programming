#include <stdio.h>
void first_this(void) _attribute_((constructor));
/**
 * first_this - print first before main
 *
 * Return: void
 */
void first_this(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
