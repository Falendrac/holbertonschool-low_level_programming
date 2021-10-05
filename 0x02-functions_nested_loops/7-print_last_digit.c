#include "main.h"

/**
 * print_last_digit - return the last digit
 *
 * @n: The number we take the last digit
 *
 * Return: r
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		n = n * -1;

	lastdigit = n % 10;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
