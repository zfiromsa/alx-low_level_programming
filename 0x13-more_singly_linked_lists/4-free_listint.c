#include "lists.h"

void free_listint(listint_t *head)
{
	if (head == NULL)
		exit (98);
	free_listint(head->next);
	free(head);
}

