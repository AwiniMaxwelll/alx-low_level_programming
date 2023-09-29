#include "main.h"

/**
 * get_endianness - checks if the byte ordering of a  machine is
 * little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian_checker = (char *) &i;

	return (*endian_checker);
}
