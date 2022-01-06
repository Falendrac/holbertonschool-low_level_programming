#include "lists.h"

/**
 * free_dlistint - Free the memory alocated in dlistint_t list
 *
 * @head: The first node of a dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
