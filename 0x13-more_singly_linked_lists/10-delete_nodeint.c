#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at the index of a listint_t list
 *
 * @head: The listint_t we delete a node at the index
 * @idx: The index where we want to delete a node
 *
 * Return: The adress of the element, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp_list, *tmp_list_next;
	unsigned int loop = 1;

	if (head == NULL || *head == NULL)
		return (-1);

	if (idx != 0)
	{

		tmp_list = *head;
		while (tmp_list != NULL && loop < idx)
		{
			tmp_list = tmp_list->next;
			tmp_list_next = tmp_list->next;
			loop++;
		}

		if (loop < idx)
		{
			return (-1);
		}

		tmp_list->next = tmp_list_next->next;
		free(tmp_list_next);
	}
	else
	{
		tmp_list = (*head)->next;
		free(*head);
		*head = tmp_list;
	}

	return (1);
}
