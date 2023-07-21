#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sums a list of given integers
 *@n: an integer that determines the end of the list
 *Return: returns the sum of the list
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int total;
unsigned int i;
total = 0;
va_start(arg, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
total += va_arg(arg, int);
}
va_end(arg);
return (total);
}
