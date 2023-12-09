#include "lists.h"

/**
 * delete_dnodeint_at_index - that deletes the node at index index
 *
 * @idx: is the index of the list where the new node should be added.
 * @head: address of the node
 * Return: 1 OR -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *h;

	count = 0;
	h = (*head);
	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		(*head) = h->next;
		if (h->next)
		(h)->next->prev = NULL;
		free(h);
		return (1);
	}
	while (h && count < index)
	{
		h = h->next;
		count++;
	}
	if (count == index && h)
	{
		if (h->next)
			h->next->prev = h->prev;
		if (h->prev)
			h->prev->next = h->next;
		free(h);
		return (1);
	}
	return (-1);
}

