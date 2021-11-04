#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct searchtype - Struct searchtype
 *
 * @typeOf: The type we search
 * @f: The function associated
 */
typedef struct searchtype
{
	char *typeOf;
	void (*f)(va_list);
} searchT;

void print_char(va_list listFormat);
void print_integer(va_list listFormat);
void print_float(va_list listFormat);
void print_string(va_list listFormat);

#endif
