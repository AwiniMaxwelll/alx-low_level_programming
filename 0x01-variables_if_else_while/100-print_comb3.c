#include <stdio.h>
/**
 * main - entry point
 * Return: (0) (successful)
 */
int main(void)
{
	int var1, var2;

	for (var1 = '0'; var1 < '9'; var1++)
	{
	for (var2 = var1 + 1; var2 <= '9'; var2++)
	{
	if (var2 != var1)
	{
	putchar(var1);
	putchar(var2);
	if (var1 != '8' && var2 != '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

