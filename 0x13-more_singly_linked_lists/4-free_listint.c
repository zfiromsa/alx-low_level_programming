#include "lists.h"

void free_listint(listint_t *head)
{
listint_t *new;

new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL || head == NULL)
{
exit (98);
}
new = head;
head = head->next;
free(new->next);
free(new);
free_listint(head);
}