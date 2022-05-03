#include "search_algos.h"


/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);

	if (array == NULL || array[0] > value)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);
	prev -= step;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (prev < size && array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
