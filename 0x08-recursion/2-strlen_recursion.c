#include "main.h"
/**
 * _strlen_recursion - returns the length of a given string
 * @s: the string to be counted
 * Return: return 0 ('\0')
 */
int _strlen_recursion(char *s)
{
if (*s == '\n')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
