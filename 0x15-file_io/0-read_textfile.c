#include "main.h"

/**
 * read_textfile - read and print a file
 * @filename: file name
 * @letters: amount of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o = 0, w = 0, r = 0;
	char *buffer;

	if (!filename)
		return (0);
	o = open(filename, 0);
	if (o == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	r = close(o);
	free(buffer);
	return (w);
}
