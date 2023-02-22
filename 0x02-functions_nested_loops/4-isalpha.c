#include "main.h"
/**
 *_isalpha - checks to either given letter is lower or upper
 * Return: return 1 if c is  lowercaase or uppercase else return 0
 * @c:  is a chareacter to be checked
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
