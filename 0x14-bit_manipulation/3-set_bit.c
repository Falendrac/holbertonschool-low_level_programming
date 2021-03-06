#include "main.h"
#include <limits.h>

/**
 * set_bit - Set the value of a bit to 1 at a given index
 *
 * @n: The number we want to get a bit
 * @index: The index of the bit we want to get
 *
 * Return: The value of the bit at index index or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << (index);

	*n += bit;


	return (1);
}
