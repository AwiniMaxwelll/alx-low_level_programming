#include "main.h"
int check_divisor(int n, int div);
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
/* Base cases */
if (n <= 1)
{
return (0);
}
else if (n == 2)
{
return (1); /* 2 is prime */
}
else if (n % 2 == 0)
{
return (0); /* Even numbers other than 2 are not prime */
}
/* Check odd divisors up to the square root of n */
return (check_divisor(n, 3));
}

/**
 * check_divisor - helper function to check if an integer is a prime number
 * @n: the integer to check
 * @div: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_divisor(int n, int div)
{
if (div * div > n)
{
return (1);
}
else if (n % div == 0)
{
return (0);
}
else
{
return (check_divisor(n, div + 2));
}
}
