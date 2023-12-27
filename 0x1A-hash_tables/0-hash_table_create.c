#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * size: the size of table.
 * Return: NULL OR table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t *));
	if (!table)
		return (NULL);
	else
	{
		table->array = (hash_node_t **) calloc(size ,sizeof(hash_node_t));
	table->size = size;
	}
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}

