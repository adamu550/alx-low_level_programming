#include<unistd.h>
/**
 * main-prints _putchar to stdout
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	write(2,
		 "_putchar\n", 11);
	return (0);

}
