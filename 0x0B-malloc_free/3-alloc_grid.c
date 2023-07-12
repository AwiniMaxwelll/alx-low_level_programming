#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate memory for a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the newly allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **m;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
m = malloc(height * sizeof(int *));
if (m == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
m[i] = malloc(width * sizeof(int));
if (m[i] == NULL)
{
for (j = 0; j < i; j++)
free(m[j]);
free(m);
return (NULL);
}
for (j = 0; j < width; j++)
m[i][j] = 0;
}
return (m);
}

