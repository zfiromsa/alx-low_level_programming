#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
    dlistint_t *_newlist, *tmp;


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
        tmp = add_dnodeint_end((&tmp), n);
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
	return (NULL);
}

