#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of arguments.
 * @av: array of arguments.
 *
 * Return: pointer to a new string containing all the arguments,
 * separated by a '\n' character,
 * or NULL if ac == 0 or av == NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
total_len += len + 1;
len = 0;
}
str = malloc(total_len *sizeof(char) + 1);
if (str == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[len] = av[i][j];
len++;
}
str[len] = '\n';
len++;
}
str[len] = '\0';
return (str);
}
