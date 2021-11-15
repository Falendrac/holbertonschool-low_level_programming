#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *
 * @head: The linked list
 * @index: The index of the node we returns
 *
 * Return: nth_node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int loop = 0;

	if (head == NULL)
		return (NULL);

	nth_node = head;

	while (loop != index && nth_node != NULL)
	{
		nth_node = nth_node->next;
		loop++;
	}

	return (nth_node);
}
