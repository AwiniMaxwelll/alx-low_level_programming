#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
int fib1 = 1;
int fib2 = 2;
int fib3;
int sum_even = 0;

while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
{
sum_even += fib1;
}
fib3 = fib1 + fib2;
fib1 = fib2;
fib2 = fib3;
}
printf("%d", sum_even);
printf("\n");
return (0);
}
