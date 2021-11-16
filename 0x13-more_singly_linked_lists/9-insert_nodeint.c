#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Add a new node at the index of a listint_t list
 *
 * @head: The listint_t we add a new node at the index
 * @idx: The index where we want to add a new node
 * @n: Argument pass to be add in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_list;
	unsigned int loop = 1;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx != 0)
	{

		tmp_list = *head;
		while (tmp_list != NULL && loop < idx)
		{
			tmp_list = tmp_list->next;
			loop++;
		}

		if (loop < idx)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = tmp_list->next;
		tmp_list->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
