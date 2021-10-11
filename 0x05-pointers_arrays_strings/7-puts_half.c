#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: The string we print
 */
void puts_half(char *str)
{
	int length = 0, half;

	while (str[length] != '\0')
		length++;

	for (half = length / 2; half < length; half++)
		_putchar(str[half]);

	_putchar('\n');
}

