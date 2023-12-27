#include "hash_tables.h"


void free_table(hash_table_t *table, unsigned long int size)
{
    unsigned long int i;

    i = 0;
    while (i < size)
    {
        free(table->array[i]);
    }
    free(table);
}
