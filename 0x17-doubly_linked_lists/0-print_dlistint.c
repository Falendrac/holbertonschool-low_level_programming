#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print all elements of a dlistint_t list.
 *
 * @h: First node of a dlistint_t list.
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
