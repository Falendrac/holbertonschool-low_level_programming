#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list
 *
 * @head: The list_t we add a new node
 * @str: Argument pass to be add in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *tmp_list;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (*(new_node->str + length) != '\0')
		length++;

	new_node->len = length;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp_list = *head;
		*head = new_node;
		new_node->next = tmp_list;
	}

	return (new_node);
}
