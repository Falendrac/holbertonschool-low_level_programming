#include "hash_tables.h"

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
	hash_node_t **array;
	hash_node_t *new;

	/* Test if ht, array and key is null */
	if (!ht || !ht->array || !key)
		return (HASH_SET_FAIL);

	array = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (HASH_SET_FAIL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (array[index] != NULL)
	{
		new->next = array[index];
		array[index] = new;
	}
	array[index] = new;

	return (HASH_SET_SUCCESS);
}
