#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a: is an integer be swaped
 * @b: is an integer to be swaped
 * Return: return the value of a as b and b as a
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
