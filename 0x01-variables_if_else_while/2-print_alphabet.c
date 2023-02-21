#include <stdio.h>
/**
 * main - program that print alphabet in lower case
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
