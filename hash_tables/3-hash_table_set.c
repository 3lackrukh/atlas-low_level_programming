#include "hash_tables.h"

/**
 * hash_table_set- adds an element to the has table.
 *
 * @ht: pointer to the hash table to be added to.
 *
 * @key: the key string.
 *
 * @value: the string data to be stored with the key.
 *
 * Return: 1 on success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	const char *original_key = key;
	int index, c;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	if (value == NULL)
	{
		free(new_node);
		return (0);
	}
	hash = 5381;
	while ((c = *key++))
		hash = ((hash << 5) + hash) + c;

	index = hash % ht->size;

	new_node->key = strdup(original_key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (1);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
