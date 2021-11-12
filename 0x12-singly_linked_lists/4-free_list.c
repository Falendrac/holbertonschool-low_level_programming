#include "lists.h"

/**
 * free_list - Free the memory of the entirely list
 *
 * @head: The linked list we want to free
 */
void free_list(list_t *head)
{
	list_t *tmp_list, *second_tmp_list;

	if (head != NULL)
		tmp_list = head;

	while (tmp_list->next != NULL)
	{
		second_tmp_list = tmp_list;
		free(second_tmp_list->str);
		free(second_tmp_list);
		tmp_list = tmp_list->next;
	}

	free(tmp_list->str);
	free(tmp_list);
}
