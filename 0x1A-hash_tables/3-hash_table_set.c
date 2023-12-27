#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 0 or 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *node;

	i = 0;
	index = key_index((const unsigned char*)key, ht->size);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	if (!ht->array[index])
	{
		ht->array[index] = node;
		return (1);
	}
	while (i < ht->size)
	{
		if (!ht->array[i])
		{
			ht->array[i] = node;
			return (1);
		}
		i++;
	}
	return (0);
}

