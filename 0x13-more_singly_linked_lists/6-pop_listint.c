#include "lists.h"

/**
 * pop_listint - a fun that delete the head node and return head node data.
 *
 * @head: address of linked list.
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	data = 0;
	if (head != NULL)
	{
		data = (*head)->n;
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	return (data);
}

