#include "variadic_functions.h"
#include "stdio.h"

/**
 * print_strings - Prints strings, followed by a new line
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int loop;
	va_list list_var;
	const char *str;

	va_start(list_var, n);

	for (loop = 0; loop < n; loop++)
	{
		str = va_arg(list_var, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && loop < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list_var);
}
