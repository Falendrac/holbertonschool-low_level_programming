#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest factor of a number
 *
 * Return: 0
 */
int main(void)
{
	unsigned long factormax = 612852475143;
	unsigned long divisor = 2;

	do {
		if (factormax % divisor == 0)
		{
			factormax = factormax / divisor;
			divisor = 2;
		}
		else
		{
			divisor++;
		}
	} while (divisor != factormax);

	printf("%lu\n", factormax);
	return (0);
}
