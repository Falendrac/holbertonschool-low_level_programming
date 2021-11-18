#include "main.h"

/**
 * flip_bits - Returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: number
 * @m: The number we want to flip
 *
 * Return: The number of bits we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;

	if (bit > 0)
		return (flip_bits_count(bit));

	return (0);
}

/**
 * flip_bits_count - Returns the number of bits you would
 * need to flip to get from one number to another recursively
 *
 * @bit: The number product
 *
 * Return: The number of bits we need to flip
 */
unsigned int flip_bits_count(unsigned long int bit)
{
	unsigned int count = 0;

	if (bit > 0)
	{
		if (bit & 1)
			count++;

		count += flip_bits_count((bit >> 1));
	}

	return (count);
}
