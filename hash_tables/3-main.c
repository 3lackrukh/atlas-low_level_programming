#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void print_table (hash_table_t *ht)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (ht->array[i] == NULL)
		{
			printf("\t%i\t---\n", i);
		}
		else
		{
			printf("\t%i\t%s\t%s\n", i, ht->array[i]->key, ht->array[i]->value);
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
    hash_table_set(ht, "hetairas", "southern");
    hash_table_set(ht, "mentioner", "friend");
    hash_table_set(ht, "heliotropes", "sunbiz");
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
