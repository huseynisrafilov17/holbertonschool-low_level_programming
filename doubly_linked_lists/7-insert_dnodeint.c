#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at the given index.
 * @h: first element of the list.
 * @idx: index.
 * @n: int.
 * Return: pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *current_node = *h, *previous_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (count < idx && current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	if (count == idx && current_node == NULL)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	else if (current_node != NULL && count == idx)
	{
		previous_node = current_node->prev;
		new->next = current_node;
		new->n = n;
		new->prev = previous_node;
		current_node->prev = new;
		previous_node->next = new;
	}
	else
		return (NULL);
	return (new);
}
