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
	dlistint_t *_newlist, *_lastlist;

	_lastlist = *head;
	_newlist = malloc(sizeof(dlistint_t));
	if (_newlist == NULL)
		return (NULL);
	_newlist->next = NULL;
	_newlist->n = n;
	if (*head == NULL)
	{
		_newlist->prev = NULL;
		*head = _newlist;
		return (_newlist);
	}
	while (_lastlist->next)
		_lastlist = _lastlist->next;
	_lastlist->next = _newlist;
	_newlist->prev = _lastlist;
	return (_newlist);
}

