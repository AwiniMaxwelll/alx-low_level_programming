#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates momery using malloc.
 * @b: number of bytes to be allocate in the memory.
 * Return: returns a pointer to the memory.
 */
void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
