#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp;
unsigned int count;

count = 0;
tmp = (listint_t *)malloc(sizeof(listint_t));
while (count <= idx)
{
if ((*head)->next == NULL)
{
return (NULL);
}
(*head) = (*head)->next;
}
if ((*head) == NULL)
{
tmp->n = n;
tmp->next = NULL;
(*head)->next = tmp;
}
else
{
tmp->n = n;
tmp->next = (*head)->next;
(*head)->next = tmp;
}
return (tmp);
}

