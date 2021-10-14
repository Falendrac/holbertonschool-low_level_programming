#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: int variable we print
 */
void print_number(int n)
{
	int size = 1, number, i;

	while (n / size > 9 || n / size < -9)
		size *= 10;

	if (n < 0)
		_putchar('-');

	for (i = size; i >= 1; i /= 10)
	{
		if (n >= 0)
			number = (n / i) % 10;
		else
			number = ((n / i) % 10) * -1;

		_putchar(number + '0');
	}
}
