#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
listint_t *_next, *_prev;

_prev = NULL;
_next = NULL;
while ((*head) != NULL)
{
_next = (*head)->next;
(*head)->next = _prev;
_prev = (*head);
(*head) = _next;
}
(*head) = _prev;
return ((*head));
}

