#include "hash_tables.h"

/**
 * hash_table_delete- deletes a hash table.
 *
 * @ht: pointer to the table to be deleted.
 *
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				next = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
