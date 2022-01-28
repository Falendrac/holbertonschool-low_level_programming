#include "hash_tables.h"

/**
 * hash_table_print - Print the current hash table
 *
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current;
	int first_print = 0;

	if (ht)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			current = ht->array[idx];

			while (current)
			{
				if (first_print != 0)
					printf(", ");
				first_print = 1;
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
		printf("}\n");
	}
}
