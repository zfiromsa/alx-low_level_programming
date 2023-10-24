#include "lists.h"

/**
 * free_listint - free a lists_t.
 *
 * @head: it point to lists_t lists.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

