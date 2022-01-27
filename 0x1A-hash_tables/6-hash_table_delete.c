#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht)
	{
		if (ht->array)
		{
			for (idx = 0; idx < ht->size; idx++)
			{
				if (ht->array[idx])
				{
					current = ht->array[idx];

					while (current)
					{
						current = current->next;
						free(ht->array[idx]->key);
						free(ht->array[idx]->value);
						free(ht->array[idx]);
						ht->array[idx] = current;
					}
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
