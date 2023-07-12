#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: a pointer to the concatenated string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int str1_len = 0, str2_len = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[str1_len] != '\0')
str1_len++;
while (s2[str2_len] != '\0')
str2_len++;
concat_str = malloc(sizeof(char) * (str1_len + str2_len + 1));
if (concat_str == NULL)
return (NULL);
for (i = 0; i < str1_len; i++)
concat_str[i] = s1[i];
for (j = 0; j < str2_len; j++)
concat_str[i + j] = s2[j];
concat_str[i + j] = '\0';

return (concat_str);
}
