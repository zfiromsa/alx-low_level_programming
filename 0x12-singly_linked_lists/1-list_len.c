#include "lists.h"

size_t list_len(const list_t *h)
{
unsigned long int elem;

elem = 0;
while (h != NULL)
{
h = h->next;
elem++;
}
return (elem);
}
