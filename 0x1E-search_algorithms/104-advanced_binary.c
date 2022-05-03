#include "search_algos.h"

/**
 * binary_search_recursion - Do the binary search in recursion
 *
 * @array: pointer to the first element of the array to search in
 * @min: The index min where we are
 * @max: The index max where we are
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int binary_search_recursion(int *array, size_t min, size_t max, int value)
{
	size_t index = (max + min) / 2;
	size_t loop;

	printf("Searching in array: ");
	for (loop = min; loop <= max; loop++)
	{
		printf("%d", array[loop]);
		if (loop < max)
			printf(", ");
		else
			printf("\n");
	}
	if (min > max)
		return (-1);

	if (min == max)
	{
		if (value == array[max])
			return (max);
		else
			return (-1);
	}

	if (value == array[index] && array[index - 1] == value)
		return (binary_search_recursion(array, min, index, value));

	if (value == array[index])
		return (index);

	if (value < array[index])
		return (binary_search_recursion(array, min, index, value));

	if (value > array[index])
		return (binary_search_recursion(array, index + 1, max, value));

	return (-1);
}

/**
 * advanced_binary -  searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 * Otherwise, return the first index of value
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (binary_search_recursion(array, 0, size - 1, value));
}
