#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
int i, y;

	for (i = 0; i < 10; ++i)
	{
		for (y = i; y < 10; ++y)
		{
			if (i != y)
			{
				putchar ((i % 10) + '0');
				putchar((y % 10) + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}

	putchar('\n');
	return (0);
}
