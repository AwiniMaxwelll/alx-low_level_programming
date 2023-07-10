#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiple of 2 integers
 * @argc: number of integers passed to the function
 * @argv: the array of characters passed
 * Return: 0 on success otherwise 1
 */
int main(int argc, char *argv[])
{
int product;
if (argc == 3)
{
product = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
return (0);
}
printf("Error\n");
return (1);
}
