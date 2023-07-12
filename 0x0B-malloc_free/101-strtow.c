#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int i, count = 0;
for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words),
 * or NULL if str == NULL
 * or str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
int i, j, k, len, words;
char **array;
if (str == NULL || *str == '\0')
return (NULL);
words = count_words(str);
array = malloc(sizeof(char *) * (words + 1));
if (array == NULL)
return (NULL);

for (i = 0, j = 0; j < words; i++)
{
if (str[i] != ' ')
{
len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;

array[j] = malloc(sizeof(char) * (len + 1));
if (array[j] == NULL)
{
for (k = 0; k < j; k++)
free(array[k]);
free(array);
return (NULL);
}
for (k = 0; k < len; k++)
array[j][k] = str[i + k];
array[j][len] = '\0';
j++;
i += len;
}
}

array[j] = NULL;
return (array);
}
