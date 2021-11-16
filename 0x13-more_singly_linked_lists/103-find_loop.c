#include "lists.h"

/**
 * find_listint_loop - Search if we have a loop in the linked list
 *
 * @head: The linked list where we search the loop
 *
 * Return: The adress of the where the loop starts, or NULL is there no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search, *start;

	search = head->next;
	start = head;
	while (search != NULL)
	{
		while (start != search->next && start != search)
			start = start->next;

		if (start != search)
			return (search->next);

		start = head;
		search = search->next;
	}

	return (NULL);
}
