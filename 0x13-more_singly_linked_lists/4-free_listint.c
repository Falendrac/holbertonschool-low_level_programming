#include "lists.h"

/**
 * free_listint - Free the memory of the entirely list
 *
 * @head: The linked list we want to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_list;


	while (head != NULL)
	{
		tmp_list = head;
		head = head->next;
		free(tmp_list);
	}

}
