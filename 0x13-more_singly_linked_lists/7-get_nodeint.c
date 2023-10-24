#include "lists.h"

/**
 * get_nodeint_at_index - a func that returns the nth node of a list.
 * 
 * @head: address of linked list.
 * @index: the index of the node.
 * Return: head or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (index != i || head->next != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}

