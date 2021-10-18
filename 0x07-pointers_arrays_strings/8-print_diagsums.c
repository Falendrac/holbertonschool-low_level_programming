#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: The matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int loop, diag = 0, sum = 0;

	for (loop = 0; loop < size; loop++)
		sum += *(a + loop + loop * size);

	printf("%d, ", sum);
	sum = 0;

	for (loop = size - 1; loop >= 0; loop--, diag++)
		sum += *(a + loop * size + diag);

	printf("%d\n", sum);
}

