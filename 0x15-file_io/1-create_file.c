#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i])
		i++;
	w = write(fd, text_content, i);
	if (w == -1 || w != i)
		return (-1);
	close(fd);
	if (fd == -1)
		return (-1);
	return (1);
}

