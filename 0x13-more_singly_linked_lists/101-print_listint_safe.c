#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 *
 * @head: address of linked lists.
 * Return: count.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	count = 0;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head->next, head->n);
		count++;
		head = head->next;
	}
	return (count);
}

