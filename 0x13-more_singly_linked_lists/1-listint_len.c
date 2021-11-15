#include "lists.h"

/**
 * listint_len - Return the number of elements
 * in a linked listint_t list.
 *
 * @h: The linked listint_t
 *
 * Return: Element
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;
	const listint_t *tmp_list;

	if (h != NULL)
	{
		tmp_list = h;

		while (tmp_list != NULL)
		{
			element++;
			tmp_list = tmp_list->next;
		}
	}

	return (element);
}
