#include "search_algos.h"

/**
 * linear_skip -  searches for a value in a sorted skip list of integers.
 *
 * @list: a pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return NULL
 * Otherwise, return the node where we find the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmpStart = list, *tmpEnd = list;

	if (list == NULL)
		return (NULL);

	while (tmpEnd->next && tmpEnd->n < value)
	{
		tmpStart = tmpEnd;
		if (tmpEnd->express != NULL)
			tmpEnd = tmpEnd->express;
		else
		{
			while (tmpEnd->next != NULL)
				tmpEnd = tmpEnd->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", tmpEnd->index, tmpEnd->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	tmpStart->index, tmpEnd->index);

	while (tmpStart && tmpStart->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		tmpStart->index, tmpStart->n);
		tmpStart = tmpStart->next;
	}

	if (tmpStart)
		printf("Value checked at index [%ld] = [%d]\n",
		tmpStart->index, tmpStart->n);

	return (tmpStart);
}
