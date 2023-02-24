#include "main.h"

/**
 * print_line - prints a straight line of length n
 * @n: length of the line
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}

