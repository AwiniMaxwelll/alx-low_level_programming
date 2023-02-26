#include <stdio.h>
/**
 * main - print 50  fibonacci numbers starting with 2 and 2
 * Return: always 0 (success)
 */
int main(void)
{
int fib1 = 1, fib2 = 2, fib3;
int i;
printf("%d, %d", fib1, fib2);

for (i = 2; i < 50; i++)
{
fib3 = fib1 + fib2;
printf(", %d", fib3);
fib1 = fib2;
fib2 = fib3;
}

printf("\n");
return (0);
}

