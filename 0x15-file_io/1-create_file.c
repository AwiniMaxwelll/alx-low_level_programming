#include "main.h"
/**
 * create_file - creates a file.
 * @filename: the name of the file to be created
 * @text_content: the content to writen into the file.
 * Return: 1 for success, -1 for errors
 */
int create_file(const char *filename, char *text_content)
{
int fd, w, max;
if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
for (max = 0; text_content[max];)
	max++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, max);
if (fd == -1 || w == -1)
	return (-1);
close(fd);
return (0);
}
