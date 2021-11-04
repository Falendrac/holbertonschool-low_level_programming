#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 *
 * @n: Number of argument
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int loop;
	va_list list_var;

	if (n == 0)
		return (0);

	va_start(list_var, n);

	for (loop = 0; loop < n; loop++)
		sum += va_arg(list_var, int);

	va_end(list_var);
	return (sum);
}
