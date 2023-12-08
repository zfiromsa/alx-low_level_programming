#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n).
 *
 * @head: head of list.
 * Return: sum.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

