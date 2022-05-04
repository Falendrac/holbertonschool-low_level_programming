#include "search_algos.h"

/**
 * linear_skip -  searches for a value in a sorted skip list of integers.
 *
 * @list: a pointer to the head of the list to search in
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return NULL
 * Otherwise, return the node where we find the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmpStart = list, *tmpEnd = list;

	if (list == NULL)
		return (NULL);

	while (tmpEnd->express && tmpEnd->n < value)
	{
		tmpStart = tmpEnd;
		tmpEnd = tmpEnd->express;
		printf("Value checked at index [%ld] = [%d]\n", tmpEnd->index, tmpEnd->n);
	}

	if (!tmpEnd->express && tmpEnd->n < value)
	{
		tmpStart = tmpEnd;
		while (tmpEnd->next != NULL)
			tmpEnd = tmpEnd->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
										tmpStart->index, tmpEnd->index);

	while (tmpStart && tmpStart->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
										tmpStart->index, tmpStart->n);
		if (tmpStart->n == value)
			return (tmpStart);
		tmpStart = tmpStart->next;
	}

	return (NULL);
}
