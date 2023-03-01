#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
int len = 0, i;
char swaper;

while (s[len] != '\0')
len++;

for (i = 0; i < len / 2; i++)
{
swaper = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = swaper;
}
}

