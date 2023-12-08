#include "lists.h"
/**
 * get_dnodeint_at_index - func that returns the nth node of a dlistint_t linked list.
 *
 * @head: head of list.
 * @index: index.
 * Return: NULL of head.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count;

	count = 0;
	while (head)
	{
	if (count == index)
		return (head);
	head = head->next;
	}
	return (NULL);
}

