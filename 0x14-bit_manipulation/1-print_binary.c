#include "main.h"

/**
 * print_binary - Function that prints the binary
 * representation of a number
 *
 * @n: The number we print the binary representation
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_recursive(n);
}

/**
 * print_binary_recursive - Function that prints the binary
 * representation of a number recursively
 *
 * @n: The number we print the binary representation
 */
void print_binary_recursive(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_recursive(n >> 1);

		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
