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
	unsigned int count;

	count = 0;
	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	while (count <= idx)
	{
		if ((*head)->next == NULL)
			return (NULL);
		(*head) = (*head)->next;
		count++;
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

