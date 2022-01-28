#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table
 *
 * @ht: the hashe table
 * @key: key to insert in the hash table, can not be an empty string
 * @value: value of the key can be an empty string
 * Return: HASH_SET_FAIL (1) if ht, ht->array an key is null or malloc failed
 * otherwise return HASH_SET_SUCCESS (0)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **array = ht->array;
	hash_node_t *new = NULL, *current;

	if (!ht || !ht->array || !key || strcmp(key, "") == 0 || !value)
		return (HASH_SET_FAIL);

	index = key_index((const unsigned char *)key, ht->size);
	current = array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (HASH_SET_FAIL);
			return (HASH_SET_SUCCESS);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (HASH_SET_FAIL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (HASH_SET_FAIL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (HASH_SET_FAIL);
	}
	new->next = array[index];
	array[index] = new;
	return (HASH_SET_SUCCESS);
}
