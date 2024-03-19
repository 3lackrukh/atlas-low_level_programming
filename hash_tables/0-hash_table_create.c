#include "hash_tables.h"

/**
 * hash_table_create- creates a hash table.
 *
 * @size: the size of the hash table to create.
 *
 * Return: a pointer to the newly created hash table. NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *tab = malloc(sizeof(hash_table_t));

	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = (malloc(sizeof(hash_node_t *) * size));
	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	while (i < size)
	{
		tab->array[i] = NULL;
		i++;
	}
	return (tab);
}
