#include "hash.h"

int main()
{
HashTable *table;

table = create_table(CAPACITY);
ht_insert(table, "moti", "zawdie");
ht_insert(table, "firomsa", "zawdie");
ht_insert(table, "zmoti", "zawdie");
ht_insert(table, "zmoti", "zawdie");
print_table(table);
return (0);
}

