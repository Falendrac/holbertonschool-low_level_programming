#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Delete at the index in the dlistint list.
 *
 * @head: The pointer of pointer of dlistint list
 * @index: The index where we delete a node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx = 0;


	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		current = *head;
		while (current->next != NULL && idx != index)
		{
			current = current->next;
			idx++;
		}
		if (idx == 0)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(current);
		}
		else if (idx == index)
		{
			if (current->next != NULL)
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			else
				current->prev->next = NULL;
			free(current);
		}
		else
			return (-1);
	}
	return (1);
}
