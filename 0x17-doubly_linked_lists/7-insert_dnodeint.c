#include "lists.h"
/**
 * insert_dnodeint_at_index -  func that inserts a new node at a given position
 *
 * @idx: is the index of the list where the new node should be added.
 * @n: value.
 * @h: address of the node
 * Return: NULL OR _newlist.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *_newlist, *head;

	if (idx == 0)
		return (add_dnodeint(h, n));
	head = (*h);
	count = 0;
	while (head)
	{
		if (count == idx - 1)
		{
			if (head->next == NULL)
				return (add_dnodeint_end(h, n));
			else
			{
				_newlist = malloc(sizeof(dlistint_t));
				if (!_newlist)
					return (NULL);
				_newlist->n = n;
				_newlist->prev = head;
				_newlist->next = head->next;
				head->next->prev = _newlist;
				head->next = _newlist;
				return (_newlist);
			}
		}
		head = head->next;
		count++;
	}
	return (NULL);
}

