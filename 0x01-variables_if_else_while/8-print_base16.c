#include <stdio.h>
/**
 * main - entry point
 * Return: (0) success
 */
int main(void)
{
	int hexad;
	char lower;

	for (hexad = '0'; hexad <= '9'; hexad++)
	putchar(hexad);
	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
