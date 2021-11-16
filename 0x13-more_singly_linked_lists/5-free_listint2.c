#include "lists.h"

/**
 * free_listint2 - Free the memory of the entirely list
 *
 * @head: The linked list we want to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_list;


	while (*head != NULL)
	{
		tmp_list = *head;
		*head = (*head)->next;
		free(tmp_list);
	}

	*head = NULL;
}
