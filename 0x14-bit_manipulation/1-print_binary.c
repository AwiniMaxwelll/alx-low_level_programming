#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary format
 */
void print_binary(unsigned long int n)
{
int i, counter = 0;
unsigned long int checker;
if (!counter)
_putchar('0');
for (i = 63; i >= 0; i--)
{
checker = n >> i;
if (checker & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
}
