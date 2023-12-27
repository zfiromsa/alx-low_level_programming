#include "hash.h"

void print_table(HashTable* table)
{
    printf("\nHash Table\n-------------------\n");

    for (int i = 0; i < table->size; i++)
    {
        if (table->items[i])
        {
            printf("Index:%d, Key:%s, Value:%s\n", i, table->items[i] -> key, table->items[i]->value);
        }
    }

    printf("-------------------\n\n");
}