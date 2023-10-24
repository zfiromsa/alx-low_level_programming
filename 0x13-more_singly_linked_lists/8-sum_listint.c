#include "lists.h"
/**
 * sum_listint - a function return the sum  of all the data of a linked list.
 *
 * @head: address of linked lists.
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

