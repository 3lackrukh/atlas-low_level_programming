#include "hash_tables.h"

/**
 * key_index- yields the index of a key using the hash_djb2 function.
 *
 * @key: the key string.
 *
 * @size: the size of the array of the hash table.
 *
 * Return: the index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int index, c;


        hash = 5381;
        while ((c = *key++))
        {
                hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
        }
        index = hash % size;
	return (index);
}
