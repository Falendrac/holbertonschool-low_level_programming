#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t linked list
 *
 * @head: The linked list we reverse
 *
 * Return: The adress of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head, *tmp_next;

	if ((*head)->next != NULL)
	{
		tmp_next = tmp->next;
		tmp->next = NULL;
		while (tmp_next != NULL)
		{
			tmp = tmp_next;
			tmp_next = tmp->next;
			tmp->next = *head;
			*head = tmp;
		}
	}

	return (*head);
}
