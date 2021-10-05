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

	lastdigit = n % 10;

	if (n < 0)
		lastdigit = lastdigit * -1;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
