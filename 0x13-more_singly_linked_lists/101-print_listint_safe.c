#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Print all the elements of a listint_t list
 * with safe exit
 *
 * @head: The singly linked list we print all the elements
 *
 * Return: element
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t element = 0;
	const listint_t *tmp_list;

	if (h != NULL)
	{
		tmp_list = head;
		while (tmp_list != NULL)
		{
			element++;
			printf("[%p] %d\n", (void *)tmp_list, tmp_list->n);
			tmp_list = tmp_list->next;

			if (tmp_list != NULL && tmp_list < tmp_list->next)
			{
				printf("[%p] %d\n", (void *)tmp_list, tmp_list->n);
				printf("-> [%p] %d\n", (void *)tmp_list->next, tmp_list->next->n);
				exit(98);
			}
		}
	}

	return (element);
}
