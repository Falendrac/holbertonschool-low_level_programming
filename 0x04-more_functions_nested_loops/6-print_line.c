#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 *
 * @n: int variable is the number of time the character _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');
}
