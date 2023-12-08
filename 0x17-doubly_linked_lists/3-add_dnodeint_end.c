#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: head of list.
 * @n: number
 * Return: NULL OR _newlist.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_newlist;

	_newlist = malloc(sizeof(dlistint_t));
	if (_newlist == NULL)
	{
		return (NULL);
	}
	_newlist->next = NULL;
	_newlist->n = n;
	while (*head)
		*head = (*head)->next;
	_newlist->prev = *head;

	return (*head);
}

