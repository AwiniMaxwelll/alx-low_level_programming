#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: the number of argument passed to the function
 * @argv: an array of arguments passed the function
 * Return:i always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
