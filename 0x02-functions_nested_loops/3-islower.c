#include "main.h"
/**
 * _islower - checks to either given letter is lower or upper
 * Return: return o if lower else return 1
 * @c:  is a chareacter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
