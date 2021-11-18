#include "main.h"
#include <limits.h>

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 *
 * @n: The integer we change a bit
 * @index: The index where we change the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit = ~(1 << (index));

	*n &= bit;

	return (1);
}
