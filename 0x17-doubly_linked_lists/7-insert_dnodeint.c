#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
    dlistint_t *tmp, *_newlist;


	_newlist = malloc(sizeof(dlistint_t));
	if (_newlist == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (*h)
	{
	if (count == idx)
	{
        tmp = *h;
        _newlist = add_dnodeint((*h)->next, n);
        _newlist = add_dnodeint_end(_newlist, tmp);
        return (_newlist);
    }
	(*h) = (*h)->next;
	count++;
	}
	return (NULL);
}

