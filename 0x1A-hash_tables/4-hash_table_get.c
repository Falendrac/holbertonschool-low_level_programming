#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hashe table
 * @key: key we search the value
 *
 * Return: Null if no value is catches with key
 * otherwise return the value catches
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array;
	hash_node_t *current;

	array = ht->array;
	index = key_index((unsigned char *)key, ht->size);

	if (array[index] && strcmp(array[index]->key, key) == 0)
		return (array[index]->value);

	if (array[index] && array[index]->next)
	{
		current = array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);

			current = current->next;
		}
	}

	return (NULL);
}
