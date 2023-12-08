#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in lists.
 *
 * @h: head of list.
 * Return: len.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while(h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

