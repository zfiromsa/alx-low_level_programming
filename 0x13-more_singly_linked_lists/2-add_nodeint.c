#include "lists.h"

/**
 * add_nodeint - unction that adds a new node at the beginning of a list
 * @head: it is the address of head list.
 * @n: the value new list.
 * Return: head or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}

