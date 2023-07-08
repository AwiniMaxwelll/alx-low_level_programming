#include  "main.h"
/**
 * factorial - returns the factorial of a given integer.
 * @n: the integer whose factorial is be calculated.
 * Return: 1 0n 0, -1 when n is negative
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
