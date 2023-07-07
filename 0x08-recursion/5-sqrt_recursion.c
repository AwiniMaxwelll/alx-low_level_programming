#include "main.h"
/**
 *_helper_fun - Runs a search for square root.
 * @n: any number
 * @s: the starting point
 * @d: the ending point
 * Return: -1 if n has no natural square root
 */
int _helper_fun(int n, int s, int d)
{
int m;
int square;
if (s > d)
{
return (-1);
}
m = (s + d) / 2;
square = m *m;
if (square == n)
{
return (m);
}
else if (square > n)
{
return (_helper_fun(n, s, m - 1));
}
else
{
return (_helper_fun(n, m + 1, d));
}
}


/**
 *_sqrt_recursion - returns the square root of a number.
 *@n: the number
 *Return: -1 if n has no natural root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_helper_fun(n, 0, n));
}
