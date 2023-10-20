#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
list_t *Nhead;

Nhead = (struct list_t *)malloc(sizeof(list_t));
if (Nhead == NULL)
{
return (NULL);
}
Nhead->next = *head;
Nhead->str = strdup(str);
return (Nhead);
}