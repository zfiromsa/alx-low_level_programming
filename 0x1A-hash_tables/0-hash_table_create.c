#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * @size: the size of table.
 * Return: NULL OR table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t *));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(size + 1, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

