#include <stdio.h>
/**
 * main - entry point
 * Return: (0) (successful)
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 100; i++)
{
j = i / 10;
k = i % 10;

if (j < k)
{
if (i > 0)
{
putchar(',');
putchar(' ');
}

putchar(j + '0');
putchar(k + '0');
}
}

putchar('\n');

return (0);
}

