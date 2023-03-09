#include  "main.h"
/**
 *_print_rev_recursion-print the reverse of a string, ending with a new line
 *@s: the string character to be reversed
 *Return: returns void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
