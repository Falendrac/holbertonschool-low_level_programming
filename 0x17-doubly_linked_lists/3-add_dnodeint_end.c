#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: The first node of a dlistint_t list.
 * @n: Element of the new node
 *
 * Return: The new node, or NULL if the allocation of memory failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new;
		new->prev = current;
	}

	return (new);
}
