#include<unistd.h>
/**
 * main-prints _putchar to stdout
 *
 * return: Always 0 (success)
 *
 */
int main(void)
{
	write(1, "_putchar\n", 11);
	return (0);

}
