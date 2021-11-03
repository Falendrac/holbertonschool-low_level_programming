#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @size: Number of elements in the array array
 * @array: Array of integer
 * @cmp: Pointer to the function we used to compare values
 *
 * Return: The index of the first element for which the cmp function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loop;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (loop = 0; loop < size; loop++)
			if (cmp(*(array + loop)) != 0)
				return (loop);

	return (-1);
}
