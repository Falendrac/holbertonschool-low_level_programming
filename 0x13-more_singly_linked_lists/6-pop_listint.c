#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 *
 * @head: The linked list
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;

	free(*head);

	*head = tmp;

	return (n);
}
