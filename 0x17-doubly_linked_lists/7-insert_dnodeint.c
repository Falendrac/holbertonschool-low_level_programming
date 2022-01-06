#include "lists.h"
#include <stdio.h>

/**
 * create_node - Create a new node for dlistint_t list
 *
 * @n: The element of the node
 *
 * Return: new node or NULL if the allocation failed
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

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
	dlistint_t *new, *current;
	unsigned int current_idx = 0;

	new = create_node(n);
	if (new == NULL)
		return (NULL);

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
			current->prev = new;
			*h = new;
		}
		else if (current_idx == idx)
		{
			new->prev = current->prev;
			new->next = current;
			current->prev->next = new;
			current->prev = new;
		}
		else if ((current_idx + 1) == idx)
		{
			current->next = new;
			new->prev = current;
		}
		else
			free(new);
	}
	return (new);
}
