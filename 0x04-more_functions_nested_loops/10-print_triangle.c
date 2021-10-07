#include "main.h"

/**
 * print_triangle - Draw a diagonal line on the terminal
 *
 * @size: int variable is the number of time the character \ should be printed
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j < i)
					_putchar(' ');
				else
					_putchar('#');

			_putchar('\n');
		}
	else
		_putchar('\n');
}
