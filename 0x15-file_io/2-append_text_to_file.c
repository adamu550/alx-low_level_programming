#include"main.h"
/**
 *append_text_to_file - write at the end
 *@filename: file name
 *@text_content: text to add
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, w = 0, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		;
	else
	{
		while (text_content[i])
			i++;
		w =  write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
