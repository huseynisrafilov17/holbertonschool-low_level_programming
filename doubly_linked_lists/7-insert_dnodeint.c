#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at the given index.
 * @h: first element of the list.
 * @n: int.
 * Return: pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *h;
	while (count < idx && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp != NULL && count == idx)
	{
		new->prev = temp;
		new->n = n;
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
