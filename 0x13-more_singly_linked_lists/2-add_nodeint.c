#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning
 * of a listint_t list
 *
 * @head: The listint_t we add a new node
 * @n: Argument pass to be add in the new node
 *
 * Return: The adress of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
		*head = new_node;
		new_node->next = tmp_list;
	}

	return (new_node);
}
