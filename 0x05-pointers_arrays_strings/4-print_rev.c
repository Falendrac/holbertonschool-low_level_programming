#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: The string we need to print in reverse
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
		s++;

	s--;

	while (s != start)
		_putchar(*s--);

	_putchar(*s);
	_putchar('\n');
}

