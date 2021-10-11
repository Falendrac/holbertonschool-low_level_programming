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

	if (length % 2 != 0)
		half = length + 1;
	else
		half = length;

	for (half /=  2; half < length; half++)
		_putchar(str[half]);

	_putchar('\n');
}

