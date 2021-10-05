#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	/* Definiton Fibonacci suit : F0 = 0, F1 = 1 and Fn = Fn-1 + Fn-2 */

	int i; /* nmin1 = n-1, nmin2 = n-2 */
	unsigned long int n, nmin1, nmin2;

	nmin1 = 2;
	nmin2 = 1;

	for (i = 0; i < 95; i++)
	{
		if (i == 0)
			printf("%lu", nmin2);
		else
			printf(", %lu", nmin2);

		n = nmin1 + nmin2;
		nmin2 = nmin1;
		nmin1 = n;
	}

	return (0);
}
