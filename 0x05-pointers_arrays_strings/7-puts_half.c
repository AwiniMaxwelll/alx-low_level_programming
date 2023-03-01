#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string to print the second half of
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;

if (len % 2 == 0)
i = len / 2;
else
i = (len - 1) / 2 + 1;

for (; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}

