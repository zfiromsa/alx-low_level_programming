#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 500

// Defines the HashTable item.
typedef struct Ht_item
{
    char* key;
    char* value;
} Ht_item;

// Defines the HashTable.
typedef struct HashTable
{
    // Contains an array of pointers to items.
    Ht_item** items;
    int size;
    int count;
} HashTable;

unsigned int Fhash(char *str);
Ht_item* create_item(char* key, char* value);
HashTable* create_table(int size);
void free_table(HashTable* table);
void free_item(Ht_item* item);
void print_table(HashTable* table);
void ht_insert(HashTable* table, char* key, char* value);


#endif
