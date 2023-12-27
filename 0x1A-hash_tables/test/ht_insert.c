#include "hash.h"

void ht_insert(HashTable* table, char* key, char* value)
{
    Ht_item *item;
    unsigned int index;

    index = Fhash(key);
    item = create_item(key, value);
    if (table->items[index] == NULL)
    {
        table->items[index] = item;
    }
}
