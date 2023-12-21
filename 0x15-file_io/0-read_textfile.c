#include "main.h"
/**
 * read_textfile - prints a text file to the standard output.
 * @filename: name of the file which content is to printed.
 * @letters: the number letters to read and printed
 * Return: returns the actual number of letters it could read and
 * print.
 * return 0 if file cannot open or file is nulll or write fails
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
char *buf;
ssize_t w;
ssize_t rd;
if (filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buf = malloc(sizeof(char) * letters);
rd = read(fd, buf, letters);
if (rd == -1)
	return (0);
w = write(STDOUT_FILENO, buf, rd);
if (w == -1)
	return (0);
free(buf);
close(fd);
return (w);
}
