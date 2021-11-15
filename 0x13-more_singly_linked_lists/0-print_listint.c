#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all the elements of a listint_t list
 *
 * @h: The singly linked list we print all the elements
 *
 * Return: element
 */
size_t print_listint(const listint_t *h)
{
	size_t element = 0;
	const listint_t *tmp_list;

	tmp_list = h;
	while (tmp_list != NULL)
	{
		element++;
		printf("%d\n", tmp_list->n);
		tmp_list = tmp_list->next;
	}

	return (element);
}
