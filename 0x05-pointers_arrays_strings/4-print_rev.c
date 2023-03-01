#include <unistd.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

i--;

while (i >= 0)
{
write(1, &s[i], 1);
i--;
}

write(1, "\n", 1);
}

