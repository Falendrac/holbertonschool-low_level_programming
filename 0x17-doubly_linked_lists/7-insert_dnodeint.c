#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at the index
 * of a dlistint_t list.
 *
 * @h: The first node of a dlistint_t list.
 * @idx: The index where the node is insert
 * @n: Element of the new node
 *
 * Return: The new node, or NULL if the allocation of memory failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int current_idx = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
		*h = new;
	else
	{
		current = *h;

		while (current->next != NULL && current_idx != idx)
		{
			current = current->next;
			current_idx++;
		}

		if (idx == 0)
		{
			new->next = current;
			*h = new;
		}
		else
		{
			new->prev = current->prev;
			new->next = current;
			current->prev->next = new;
			current->prev = new;
		}
	}

	return (new);
}
