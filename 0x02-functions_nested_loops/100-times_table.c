#include "main.h"

/**
 * print_times_table - Print the 9 times table, stating with 0
 *
 * @n: number of times table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (k > 99)
					_putchar(k / 100 + '0');
				else
					if (j != 0)
						_putchar(' ');

				if (k > 9)
					_putchar((k / 10) % 10 + '0');
				else
					if (j != 0)
						_putchar(' ');

				_putchar(k % 10 + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			_putchar('\n');
		}

}
