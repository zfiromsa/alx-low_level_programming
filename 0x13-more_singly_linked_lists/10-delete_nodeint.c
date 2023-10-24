#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
    unsigned int _index;

    _index = index - 1;
	tmp1 = (listint_t *)malloc(sizeof(listint_t));
	if (tmp1 == NULL)
		return (-1);
	tmp2 = (listint_t *)malloc(sizeof(listint_t));
	if (tmp2 == NULL)
		return (-1);
	while (_index--)
	{
		if ((*head)->next == NULL)
			return (-1);
		(*head) = (*head)->next;
	}
    tmp1 = (*head)->next;
    (*head) = (*head)->next;
    tmp2 = (*head)->next;
    free_listint2(head);
    tmp1->next = tmp2;
    return (1);
}

