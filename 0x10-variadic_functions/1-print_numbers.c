#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int loop;
	va_list list_var;

	va_start(list_var, n);

	for (loop = 0; loop < n; loop++)
	{
		if (loop < n - 1 && separator != NULL)
			printf("%d%s", va_arg(list_var, int), separator);
		else if (loop < n - 1 && separator == NULL)
			printf("%d", va_arg(list_var, int));
		else
			printf("%d", va_arg(list_var, int));
	}
	printf("\n");

	va_end(list_var);
}
