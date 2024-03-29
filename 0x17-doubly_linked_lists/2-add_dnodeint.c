#include "lists.h"
/**
 * add_dnodeint - hat adds a new node at the beginning of a dlistint_t list.
 *
 * @head: head of list.
 * @n: number
 * Return: NULL OR _newlist.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *_newlist;

	_newlist = malloc(sizeof(dlistint_t));
	if (_newlist == NULL)
	{
		return (NULL);
	}
	_newlist->n = n;
	_newlist->next = *head;
	_newlist->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = _newlist;
	}
	*head = _newlist;

	return (_newlist);
}

