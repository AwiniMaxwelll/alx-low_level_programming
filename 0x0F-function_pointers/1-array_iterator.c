#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newline
 * @array: array
 * @size: the mumber of elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL || action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
return;
}
