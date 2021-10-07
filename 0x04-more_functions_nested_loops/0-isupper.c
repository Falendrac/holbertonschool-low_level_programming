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
	int i;

	for (i = 65; i <= 90; i++)
		if (i == c)
			return (1);

	return (0);
}
