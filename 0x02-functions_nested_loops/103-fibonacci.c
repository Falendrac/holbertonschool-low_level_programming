#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	/* Definiton Fibonacci suit : F0 = 0, F1 = 1 and Fn = Fn-1 + Fn-2 */

	int i; /* nmin1 = n-1, nmin2 = n-2 */
	unsigned long int n, nmin1, nmin2, count;

	n = 1;
	nmin1 = 1;
	nmin2 = 0;
	count = n;

	for (i = 1; i < 33; i++)
	{
		nmin2 = nmin1;
		nmin1 = n;
		n = nmin1 + nmin2;
		count += n;
	}

	printf("%lu\n", count);

	return (0);
}
