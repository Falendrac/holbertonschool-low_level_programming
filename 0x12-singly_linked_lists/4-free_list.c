#include "lists.h"

/**
 * free_list - Free the memory of the entirely list
 *
 * @head: The linked list we want to free
 */
void free_list(list_t *head)
{
	list_t *tmp_list;


	while (head != NULL)
	{
		tmp_list = head;
		head = head->next;
		free(tmp_list->str);
		free(tmp_list);
	}

}
