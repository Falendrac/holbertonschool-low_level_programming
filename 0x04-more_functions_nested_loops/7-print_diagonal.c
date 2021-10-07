#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 *
 * @n: int variable is the number of time the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				if (j != i)
					_putchar(' ');
				else
					_putchar('\\');

			_putchar('\n');
		}
	else
		_putchar('\n');
}
