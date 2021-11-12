#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list_t list.
 *
 * @h: The linked list_t
 *
 * Return: Element
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;
	const list_t *tmp_list;

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
