#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number or 0 b is null
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal_number = 0;
int i;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] > '1' || b[i] < '0' || b[i]== '-')
{
return (0);
}
decimal_number = (decimal_number << 1) + (b[i] - '0');
}
return (decimal_number);
}
