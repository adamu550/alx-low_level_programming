#include"main.h"
/**
 *exit_98 - exit 98
 *@s: argument
 *Return: void
 */
void exit_98(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 *exit_99 - exit 99
 *@s: argument
 *Return: void
 */
void exit_99(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}
/**
 *main - copy a file
 *@ag: ag
 *@av: av
 *Return: 1
 */
int main(int ag, char **av)
{
	int of = 0, ot = 0, r = 0, w = 0, c = 0;
	char buffer[1024];

	if (ag != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	of = open(av[1], O_RDONLY);
	if (of == -1)
		exit_98(av[1]);
	ot = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ot == -1)
		exit_99(av[2]);
	r = read(of, buffer, 1024);
	if (r == -1)
		exit_98(av[1]);
	while (r != 0)
	{
		w = write(ot, buffer, r);
		if (w == -1 || w != r)
			exit_99(av[2]);
		r = read(of, buffer, 1024);
		if (r == -1)
			exit_98(av[1]);
	}
	c = close(of);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", of);
		exit(100);
	}
	c = close(ot);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ot);
		exit(100);
	}
	return (0);
}
