#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
	int i, multi;

	multi = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			multi += i;
	}

	printf("%d\n", multi);
	return (0);
}
