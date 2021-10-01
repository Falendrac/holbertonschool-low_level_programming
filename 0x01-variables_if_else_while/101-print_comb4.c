#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, y, u;

	for (i = 0; i < 10; ++i)
		for (y = i; y < 10; ++y)
			for (u = y; u < 10; ++u)
			{
				if (i != y && y != u)
				{
					putchar((i % 10) + '0');
					putchar((y % 10) + '0');
					putchar((u % 10) + '0');

					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

	putchar('\n');
	return (0);
}
