#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	a++;
	}
}
