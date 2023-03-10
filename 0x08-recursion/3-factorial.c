#include "main.h"
/**
 *factorial - returns the factorial of an integer
 *@n: an integer whose factorial to be returned
 *Returns: returns -1 (unsuccessful) or returns the factorial
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
else
{
return (n * factorial(n - 1));
}
}
