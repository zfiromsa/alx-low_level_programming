#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
    dlistint_t *_newlist, *tmp;

	if (idx == 0)
        return (add_dnodeint(h, n));
	_newlist = malloc(sizeof(dlistint_t));
	if (_newlist == NULL)
	{
		return (NULL);
	}
	tmp = _newlist;
	count = 0;
	while (*h)
	{
	if (count == idx)
	{
		tmp = add_dnodeint_end(h, n);
		tmp = add_dnodeint_end(tmp, (*h)->n);
		while ((*h)->next)
		{
			tmp = add_dnodeint_end((&tmp), (*h)->n);
			(*h) = (*h)->next;
		}
		tmp = add_dnodeint_end((&tmp), (*h)->n);
        return (_newlist);
    }
	(*h) = (*h)->next;
	count++;
	}
	free(_newlist);
	return (NULL);
}

