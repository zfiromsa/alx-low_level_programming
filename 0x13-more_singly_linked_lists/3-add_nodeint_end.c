#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (TRUE)
	{
		if ((*head)->next == NULL)
		{
			(*head)->next = new;
			return (*head);
		}
		(*head) = (*head)->next;
	}
}

