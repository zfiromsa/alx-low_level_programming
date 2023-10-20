#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
list_t *Nhead;

Nhead = (list_t *)malloc(sizeof(list_t));
if (Nhead == NULL)
{
return (NULL);
}
Nhead->str = strdup(str);
Nhead->next = *head;
return (Nhead);
}