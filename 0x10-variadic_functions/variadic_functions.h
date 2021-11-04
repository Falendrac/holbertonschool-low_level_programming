#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct op
{
	char *typeOf;
	void (*f)(va_list);
} op_t;

void print_char(va_list listFormat);
void print_integer(va_list listFormat);
void print_float(va_list listFormat);
void print_string(va_list listFormat);

#endif
