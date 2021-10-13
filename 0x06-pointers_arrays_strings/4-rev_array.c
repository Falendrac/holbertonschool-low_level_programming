#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: Adress of the first element of the array
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int loop;

	for (loop = 0; loop < n; loop++, n--)
		swap_int((a + loop), (a + n - 1));
}

/**
 * swap_int - Take two point of int and swap the value of the variables
 * @a: Pointer of a
 * @b: Pointer of b
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
