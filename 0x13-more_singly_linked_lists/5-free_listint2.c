#include "lists.h"

/**
 * free_listint2 - free a lists_t.
 *
 * @head: it point to lists_t lists.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	if ((*head) == NULL)
		exit(98);
	while ((*head) != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
}

