#include "main.h"

/**
 * print_binary - Function that prints the binary
 * representation of a number
 *
 * @n: The number we print the binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_manip = n, search_div = 1;

	while ((search_div * 2) <= n_manip)
		search_div *= 2;

	if (n_manip != 0)
	{
		_putchar('1');
		n_manip -= search_div;
		search_div /= 2;
	}

	while (search_div > n_manip)
	{
		_putchar('0');
		search_div /= 2;
	}

	if (n_manip != 0)
		print_binary(n_manip);
}

