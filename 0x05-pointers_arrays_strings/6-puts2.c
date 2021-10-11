#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: The string we print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		if (i % 2 == 0 || i == 0)
			_putchar(str[i++]);
		else
			i++;

	_putchar('\n');
}

