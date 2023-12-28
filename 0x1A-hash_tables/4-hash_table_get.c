#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: NULL or value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	if (!ht || !key || strlen(key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if(!ht->array[index])
		return (NULL);
	return (ht->array[index]->value);
}

