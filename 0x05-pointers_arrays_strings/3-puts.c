#include <unistd.h>
/**
 * _puts - writes a string to the stdout
 *  @str: the character to write to stdout
 *  Returns: returns the input string
 */
void _puts(char *str)
{
int i = 0;
while (*str[i] != '\0')
{
	write(1, &str[i], 1);
	i++;
}
write(1, "\n", 1);
}
