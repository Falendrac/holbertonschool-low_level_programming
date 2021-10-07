#include "main.h"

/**
 * _isdigit - Check for a digit
 *
 * @c: int variable with the digit
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (i == c)
			return (1);

	return (0);
}
