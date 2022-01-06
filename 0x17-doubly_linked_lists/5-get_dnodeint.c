#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: The first node of a dlistint_t list.
 * @index: The index of the node that need to return
 *
 * Return: The node at the index or NULL if no node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int idx = 0;

	if (head == NULL || index == 0)
		current = head;
	else
	{
		while (head != NULL && idx != index)
		{
			idx++;
			head = head->next;
		}
		current = head;
	}

	return (current);
}
