#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: The string we need to print in reverse
 */
void print_rev(char *s)
{
	int length = 0, loop;

	if (*s != '\0')
	{
		while (s[length + 1] != '\0')
			length++;

		for (loop = 0; loop <= length; length--)
			_putchar(s[length]);
	}

	_putchar('\n');
}

