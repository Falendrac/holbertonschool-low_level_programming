#include "main.h"

/**
 * binary_to_uint - Convets a binary number to an unsigned int
 *
 * @b: The binary number we convert
 *
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int loop;

	if (b == NULL)
		return (0);

	for (loop = 0; *(b + loop) != '\0'; loop++)
	{
		if (*(b + loop) != '0' && *(b + loop) != '1')
			return (0);

		if (*(b + loop) == '1')
			decimal += 1;

		if (*(b + loop + 1) != '\0')
			decimal *= 2;
	}

	return (decimal);
}
