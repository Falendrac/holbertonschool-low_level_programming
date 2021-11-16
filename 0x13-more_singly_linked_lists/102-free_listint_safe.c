#include "lists.h"

/**
 * free_listint_safe - Free the memory of the entirely list
 *
 * @h: The linked list we want to free
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp_list;
	size_t element = 0;

	if (h == NULL || *h == NULL)
		return (0);

	listint_safemode(*h);

	while (*h != NULL)
	{
		tmp_list = *h;
		*h = (*h)->next;
		free(tmp_list);
		element++;
	}

	*h = NULL;

	return (element);
}

/**
 * listint_safemode - Delete the infinite loop at
 * the end of linked list
 *
 * @h: The linked list we delete the infinite loop
 */
void listint_safemode(listint_t *h)
{
	size_t element = 0;
	listint_t *tmp_list = h, *h_previous;

	while (h != NULL && linked_test(tmp_list, h, element))
	{
		element++;
		h_previous = h;
		h = h->next;
	}

	h_previous->next = NULL;
}
