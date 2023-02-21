#include <stdio.h>
/**
 * main - prints alphabets in the reverse form
 * Return: Always (success)
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	putchar(r);
	putchar('\n');
	return (0);
}
