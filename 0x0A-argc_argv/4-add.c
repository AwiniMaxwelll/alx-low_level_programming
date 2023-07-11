#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: total number of arguments given to the function
 * @argv: array of integers
 * Return: return 0 if successful otherwise 1
 */
int main(int argc, char *argv[])
{
int total = 0;
int i, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
total += atoi(argv[i]);
}
printf("%d\n", total);
return (0);
}
