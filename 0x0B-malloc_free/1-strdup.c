#include <stdlib.h>
/**
*_strdup - function that returns a pointer to a newly allocated space in
*memory, which contains a copy of the string given as a parameter.
*@str: The string to duplicate.
*Return: Pointer to the duplicated string, or NULL if insufficient memory
*was available or str is NULL.
*/

char *_strdup(char *str)
{
char *dup_string;
int len_string = 0, i;

if (str == NULL)
return (NULL);

while (str[len_string] != '\0')
len_string++;

dup_string = malloc((len_string + 1) * sizeof(char));
if (dup_string == NULL)
return (NULL);

for (i = 0; i <= len_string; i++)
dup_string[i] = str[i];
return (dup_string);
}

