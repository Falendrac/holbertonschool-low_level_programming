#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at the index of a listint_t list
 *
 * @head: The listint_t we delete a node at the index
 * @idx: The index where we want to delete a node
 *
 * Return: 1 if is a sucess, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp_list, *tmp_list_previous;
	unsigned int loop = 0;

	if (*head == NULL)
		return (-1);

	if (idx != 0)
	{

		tmp_list = *head;
		while (tmp_list->next != NULL && loop < idx)
		{
			tmp_list_previous = tmp_list;
			tmp_list = tmp_list->next;
			loop++;
		}

		if (loop < idx)
		{
			return (-1);
		}

		tmp_list_previous->next = tmp_list->next;
		free(tmp_list);
	}
	else
	{
		tmp_list = (*head);
		*head = (*head)->next;
		free(tmp_list);
	}

	return (1);
}
