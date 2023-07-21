#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 *print_numbers- prints list of number with commas between numbers
 *@n: number of integers passed to the function
 *@separator: the string to print between the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int output;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
output = va_arg(arg, int);
printf("%d", output);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}
