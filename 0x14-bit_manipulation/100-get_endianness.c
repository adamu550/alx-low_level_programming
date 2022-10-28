#include "main.h"
/**
 *get_endianness - get_endianness
 *Return: void
 */
int get_endianness(void)
{
	int a = 31;

	return ((1 >> a) & 1 ? 0 : 1);
}
