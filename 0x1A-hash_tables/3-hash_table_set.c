#include "hash_tables.h"

/**
 * new_node - Create a new node hash_node_t
 *
 * @key: the key
 * @value: the value of the key
 *
 * Return: NULL if malloc failled, or the new node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - Add an element to the hash table
 *
 * @ht: the hashe table
 * @key: key to insert in the hash table, can not be an empty string
 * @value: value of the key can be an empty string
 *
 * Return: HASH_SET_FAIL (1) if ht, ht->array an key is null or malloc failed
 * otherwise return HASH_SET_SUCCESS (0)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **array = ht->array;
	hash_node_t *new = NULL, *current;

	/* Test if ht, array and key is null */
	if (!ht || !ht->array || !key || strcmp(key, "") == 0 || !value)
		return (HASH_SET_FAIL);

	index = key_index((unsigned char *)key, ht->size);
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

	new = new_node(key, value);
	if (new == NULL)
		return (HASH_SET_FAIL);

	new->next = array[index];
	array[index] = new;

	return (HASH_SET_SUCCESS);
}
