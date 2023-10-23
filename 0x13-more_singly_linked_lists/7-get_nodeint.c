#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

i = 0;
while (index != i)
{
head = head->next;
i++;
}
return (head);
}

