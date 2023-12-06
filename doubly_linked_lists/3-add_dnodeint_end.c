#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node to the end of the doubly linked list.
 * @head: first node.
 * @n: integer.
 * Return: pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (*head != NULL && temp->next != NULL)
		temp = temp->next;
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = *head;
		*head = new;
	}
	else
	{
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
	}
	return (new);
}
