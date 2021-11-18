#include "main.h"

/**
 * print_binary - Function that prints the binary
 * representation of a number
 *
 * @n: The number we print the binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	int length = 0;
	unsigned long int n_divided = n;

	while (n_divided > 1)
	{
		length++;
		n_divided = n_divided >> 1;
	}

	for (i = 1 << length; i > 0; i = i >> 1)
		if (i & n)
			_putchar('1');
		else
			_putchar('0');
}

