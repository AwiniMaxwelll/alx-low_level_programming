#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lowercase alphabets except e an q
 * Return: Always (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
	if (lowercase != 'e' && lowercase != 'q')
	putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
