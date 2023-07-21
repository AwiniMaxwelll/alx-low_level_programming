#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints the given strings
 * @n: the number of strings passsed to the function
 * @separator: the charater that separates each string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
string = va_arg(args, char*);
if (string == NULL)
{
printf("nil");
}
else
{
printf("%s", string);
if (i <  n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
}
va_end(args);
printf("\n");
}
