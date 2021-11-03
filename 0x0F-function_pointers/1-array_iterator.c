#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array
 *
 * @array: Array of integer
 * @size: Size of the array
 * @action: Pointer to the function we use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t loop;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (loop = 0; loop < size; loop++)
		action(*(array + loop));
}
