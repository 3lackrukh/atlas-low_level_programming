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
	int index;
	hash_node_t *new_node, *current_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || ht == NULL || key == NULL)
	{
		free(new_node);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node->key = strdup(key);
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
