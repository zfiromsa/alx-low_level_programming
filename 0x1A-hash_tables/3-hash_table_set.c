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
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!key || strlen(key) == 0 || !ht)
		return (0);
	index = key_index((const unsigned char*)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

