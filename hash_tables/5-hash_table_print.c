#include "hash_tables.h"

/**
 * hash_table_print- prints a hash table.
 *
 * @ht: the table to be printed.
 *
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	int printed = 0;
	hash_node_t *current;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				printed = 1;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
