#include "lists.h"

/**
 * dlistint_len - return the number of elements of a dlistint_t list.
 *
 * @h: First node of a dlistint_t list.
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}

	return (node);
}
