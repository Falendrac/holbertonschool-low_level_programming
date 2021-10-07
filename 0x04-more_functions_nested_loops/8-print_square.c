#include "main.h"

/**
 * print_square - Draw a square line on the terminal
 *
 * @size: int variable is the number of time the character # should be printed
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');

			_putchar('\n');
		}
	else
		_putchar('\n');
}
