#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = *head, *previous_node, *next_node;

	if (index == 0)
	{
		curren_node = current_node->next;
		current_node->prev = NULL;
		free(*head);
		return (1);
	}
	while (current_node != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

}
