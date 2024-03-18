#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void print_table (hash_table_t *ht)
{
	int i = 0;
	hash_node_t *current;

	for (i = 0; i < 1024; i++)
	{
		current = ht->array[i];
		if (ht->array[i] != NULL)
		{
			printf("\t%i\n", i);
			while (current != NULL)
			{
				printf("\t\t%s\t%s\n", current->key, current->value);
				current = current->next;
			}
			
		}
	}
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "holberton", "is cool");
    hash_table_set(ht, "holberton", "is so cool");
    hash_table_set(ht, "holberton", "is awesome");
    hash_table_set(ht, "neurospora", "seeded");
    hash_table_set(ht, "depravement", "debauchery");
    hash_table_set(ht, "stylist", "Wynstan");
    hash_table_set(ht, "serafins", "fandom");
    hash_table_set(ht, "subgenera", "noir");
    hash_table_set(ht, "joyful", "jaunt");
    hash_table_set(ht, "synaphea", "brains");
    hash_table_set(ht, "redescribed", "captioning");
    hash_table_set(ht, "urites", "urea");
    hash_table_set(ht, "dram", "bottle");
    hash_table_set(ht, "vivency", "aliveness");
    hash_table_set(ht, "strife", "cloud");
    hash_table_set(ht, "leonheart", "squall");
    print_table(ht);
    return (EXIT_SUCCESS);
}
