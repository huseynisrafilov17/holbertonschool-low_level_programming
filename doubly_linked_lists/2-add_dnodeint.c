#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds new node to doubly linked list.
 * @head: 1st element.
 * @n: integer.
 * Return: pointer of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_h *new;
	new = malloc(sizeof(dlistint_h));
	if (*head != NULL)
		(*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
