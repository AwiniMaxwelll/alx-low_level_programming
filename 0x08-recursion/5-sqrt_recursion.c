#include "main.h"
int _sqrt_checker(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the natural square root of
 *
 * Return: The natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_checker(n, 1));
}
}

/**
 * _sqrt_checker - Calculates the natural square root of a number recursively
 * @n: The number to find the natural square root of
 * @i: The divisor to check for a perfect square
 *
 * Return: The natural square root of n, or -1 if n does not have one
 */
int _sqrt_checker(int n, int i)
{
if (n == i * i)
return (i);
else if (n < i * i)
{
return (-1);
}
else
{
return (_sqrt_checker(n, i + 1));
}
}
