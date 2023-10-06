#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - Read text file and  print to STDOUT.
 * @letters: the number of letters it should read and print
 * @filename: name of text file to be opened
 * Return: write the actual number of bytes to read and printed
 * or 0, if it fails or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t r, fd, w;
if (filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buf = malloc(sizeof(ssize_t) * letters);
r = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, r);
if (w == -1)
{
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (w);
}
