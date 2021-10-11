#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: Pointer of the array of integers
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
		if (loop != n - 1)
			printf("%d, ", a[loop]);
		else
			printf("%d\n", a[loop]);
}
