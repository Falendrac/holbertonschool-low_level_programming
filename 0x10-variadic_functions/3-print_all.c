#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Function that prints anything
 *
 * @format: List of differents format we want to print
 */
void print_all(const char * const format, ...)
{
	va_list listFormat;
	searchT whatFormat[] = {
			{"c", print_char},
			{"i", print_integer},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
			};
	int loop1 = 0, loop2 = 0;
	char *separator = "";

	va_start(listFormat, format);

	while (format != NULL && format[loop1])
	{
		while (whatFormat[loop2].typeOf != NULL)
		{
			if (format[loop1] == *whatFormat[loop2].typeOf)
			{
				printf("%s", separator);
				separator = ", ";
				whatFormat[loop2].f(listFormat);
			}
			loop2++;
		}
		loop1++;
		loop2 = 0;
	}

	printf("\n");
	va_end(listFormat);
}

/**
 * print_char - Print a character
 *
 * @listFormat: The va_list we want to print
 */
void print_char(va_list listFormat)
{
	printf("%c", va_arg(listFormat, int));
}

/**
 * print_integer - Print a integer
 *
 * @listFormat: The va_list we want to print
 */
void print_integer(va_list listFormat)
{
	printf("%d", va_arg(listFormat, int));
}

/**
 * print_float - Print a float
 *
 * @listFormat: The va_list we want to print
 */
void print_float(va_list listFormat)
{
	printf("%f", va_arg(listFormat, double));
}

/**
 * print_string - Print a string
 *
 * @listFormat: The va_list we want to print
 */
void print_string(va_list listFormat)
{
	char *str = va_arg(listFormat, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
