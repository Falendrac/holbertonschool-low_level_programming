#include "main.h"

/**
 * _isupper - Test if a char is in Uppercase
 *
 * @c: int variables in decimal ASCII
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
