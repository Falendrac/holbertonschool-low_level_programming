#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;

	if (bit > 0)
		return (flip_bits_count(bit));

	return (0);
}

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
