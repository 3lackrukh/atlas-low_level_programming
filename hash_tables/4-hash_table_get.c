#include "hash_tables.h"

/**
 * hash_table_get- retrieves the value associated with a key.
 *
 * @ht: pointer to the table to be checked.
 *
 * @key: the key to be searched for.
 *
 * Return: the associated value element. Or NULL if key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
