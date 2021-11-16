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

	tmp_list = head;
	while (head != NULL && linked_test(tmp_list, head, element))
	{
		element++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (element);
}

/**
 * linked_test - Test if we are not in infinite loop
 *
 * @head: The first element of linked loop
 * @current: The current element of linked loop
 * @idx: The index where we go
 *
 * Return: 0 if we are in infinite loop, otherwise 1
 */
int linked_test(const listint_t *head, const listint_t *current, size_t idx)
{
	size_t count = 0;

	while (head != current)
	{
		head = head->next;
		count++;
	}

	if (count == idx)
		return (1);

	return (0);
}
