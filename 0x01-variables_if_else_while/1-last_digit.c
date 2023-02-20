#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a text according to the last digit
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 9);
	if (lastDigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d and is zero\n", n, lastDigit);
        }
	else if (lastDigit < 6 && lastDigit != 0)
        {
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
        }
	return (0);
}
