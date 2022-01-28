#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a new hash table of size "size"
 *
 * @size: Size of the hash table
 *
 * Return: The new hash table, or NULL if the malloc failled
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = calloc(sizeof(hash_node_t *), size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	return (new);
}
