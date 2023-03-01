#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a: is an input
 * @b: is an input
 * Return: return the value of a as b and b as a
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = *c;
}
