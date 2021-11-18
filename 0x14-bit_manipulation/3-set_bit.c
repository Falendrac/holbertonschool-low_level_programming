#include "main.h"
#include <limits.h>

/**
 * set_bit - Set the value of a bit to 1 at a given index
 *
 * @n: The integer we change a bit
 * @index: The index where we change the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int good;
	unsigned int loop = 0;
	unsigned long int bit = 1;

	for (loop = 0; loop < index && bit < ULONG_MAX; loop++)
		bit *= 2;

	if ((bit + *n) < ULONG_MAX && loop == index)
	{
		*n += bit;
		good = 1;
	}
	else
		good = -1;


	return (good);
}
