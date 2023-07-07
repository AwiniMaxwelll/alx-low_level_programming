#include "main.h"
/**
 * _puts_recursion - prints a given character followed by a newline.
 * @s: a pointer to the character.
 * Return: returns void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
