#include "lists.h"

/**
 * insert_nodeint_at_index - nsert_nodeint_at_index.
 * @head: address of list
 * @idx: s the index of the list where the new node should be added
 * @n: the value of new node.
 * Return: NULL or tmp
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	while ((idx--) - 1)
	{
		if ((*head)->next == NULL)
		{
			fre(tmp);
			return (NULL);
		}
		(*head) = (*head)->next;
	}
	if ((*head) == NULL)
	{
		tmp->next = NULL;
		(*head)->next = tmp;
	}
	else
	{
		tmp->next = (*head)->next;
		(*head)->next = tmp;
	}
	return ((*head));
}

