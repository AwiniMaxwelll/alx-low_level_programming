#include "main.h"
/**
 * append_text_to_file - append a text at the end of a file.
 * @filename: thee name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 for success and -1 for filure.
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);
	if (wr == -1  || fd == -1)
		return (-1);
	close(fd);
	return (1);
}

