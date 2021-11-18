#include "main.h"
#include <stdio.h>

/**
 * get_bit - Return the value of a bit at a given index
 *
 * @n: The number we want to get a bit
 * @index: The index of the bit we want to get
 *
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int loop = 0;
	unsigned long int n_divided = n;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	while (loop < index && n_divided != 0)
	{
		n_divided /= 2;
		loop++;
	}

	if (n_divided == 0)
		bit = -1;
	else
		bit = n_divided % 2;

	return (bit);
}
