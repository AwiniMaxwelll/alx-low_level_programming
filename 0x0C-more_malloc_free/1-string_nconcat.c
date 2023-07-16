#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: the sting to be concatenated
 * @s2: the string to be concatenated
 * @n: the number of bytes
 * Return: returns the concatenated strings if succcessful
 * otherwise, return null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int len1, len2;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
concat_str = malloc(sizeof(char) * (len1 + n + 1));
if (concat_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat_str[i] = s1[i];
for (j = 0; n > j; j++, i++)
concat_str[i] = s2[j];
concat_str[i] = '\0';
return (concat_str);
}
