#include <stdio.h>
/**
 * main - prints all argument passed to it
 * followed by a newline
 * @argc: number of arguments passed
 * @argv: an array of arguments passed
 * Return: 0 on succcess
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
