#include "lists.h"

/**
 * listint_len - func that returns the numb of elements in a linked listint
 *
 * @h: pointer to linked list.
 * Return: count.
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

