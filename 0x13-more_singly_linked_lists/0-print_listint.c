#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: it is a pointer to the listint_t list.
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

