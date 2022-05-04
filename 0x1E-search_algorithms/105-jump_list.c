#include "search_algos.h"

/**
 * search_node_at_index - The the node at index
 *
 * @list: a pointer to the head of the list to search in
 * @index: The index we search
 * Return: The node at index or NULL
 */
listint_t *search_node_at_index(listint_t *list, size_t index)
{
	while (list != NULL && list->index != index)
		list = list->next;

	return (list);
}

/**
 * jump_list -  searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 *
 * @list: a pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL, return NULL
 * Otherwise, return the node where we find the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t prev;
	size_t step = sqrt(size);
	listint_t *tmp;

	if (list == NULL || list->n > value)
		return (NULL);

	prev = step;
	tmp = search_node_at_index(list, prev);

	printf("Value checked at index [%ld] = [%d]\n", prev, tmp->n);
	while (prev < size - 1 && tmp->n < value)
	{
		prev += step;
		if (prev >= size)
			tmp = search_node_at_index(tmp, size - 1);
		else
			tmp = search_node_at_index(tmp, prev);
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
	}

	prev -= step;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, tmp->index);

	tmp = search_node_at_index(list, prev);

	while (prev < size && tmp->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev, tmp->n);
		prev++;
		tmp = search_node_at_index(tmp, prev);
	}

	if (prev < size && tmp->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev, tmp->n);
		return (tmp);
	}

	return (NULL);
}
