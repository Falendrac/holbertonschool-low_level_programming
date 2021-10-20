#include "main.h"

/**
 * is_prime_number - Search if the input integer is a prime number
 *
 * @n: The number we want to know if is a prime number
 *
 * Return: 1 if is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int factor;

	factor = search_factor(n, 2);

	if (factor != n)
		return (0);
	else
		return (1);
}

/**
 * search_factor - Search a factor for n
 *
 * @n: The number we search a factor
 * @factor: The first factor
 *
 * Return: factor
 */
int search_factor(int n, int factor)
{
	if (factor < n && n % factor != 0)
		return (search_factor(n, factor + 1));
	else
		return (factor);
}

