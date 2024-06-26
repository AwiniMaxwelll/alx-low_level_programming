#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		position = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (position >= size)
		{
			printf("Value checked array[%lu] is out of range\n", position);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		else if (array[position] > value)
			high = position - 1;
		else
			low = position + 1;
	}
	return (-1);
}
