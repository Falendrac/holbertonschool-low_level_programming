#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, y;

	for (i = 0; i < 100; ++i)
		for (y = i; y < 100; ++y)
			if (i != y)
			{
				putchar(((i / 10) % 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar(((y / 10) % 10) + '0');
				putchar((y % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');
	return (0);
}

