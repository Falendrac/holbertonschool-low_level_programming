#include "lists.h"

/**
 * sum_dlistint - Do the sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: The first node of a dlistint_t list.
 *
 * Return: The sum of all data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
