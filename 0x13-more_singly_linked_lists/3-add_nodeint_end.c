#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 *
 * @head: The listint_t we add a new node at the end
 * @n: Argument pass to be add in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_list;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp_list = *head;
		while (tmp_list->next != NULL)
			tmp_list = tmp_list->next;

		tmp_list->next = new_node;
	}

	return (new_node);
}
