#include "lists.h"

/**
 * free_dlistint - Free the memory alocated in dlistint_t list
 *
 * @head: The first node of a dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		if (head->prev != NULL)
			free(head->prev);

		head = head->next;
	}

	free(head->prev);
	free(head);
}
