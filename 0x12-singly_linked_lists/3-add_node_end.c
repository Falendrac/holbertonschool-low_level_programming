#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 *
 * @head: The list_t we add a new node at the end
 * @str: Argument pass to be add in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_list;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (*(new_node->str + length) != '\0')
		length++;

	new_node->len = length;

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
