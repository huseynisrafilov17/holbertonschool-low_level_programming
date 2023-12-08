#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes node of list at given index.
 * @head: first node of list.
 * @index: given index
 * Return: 1 on success and -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = *head, *previous_node, *next_node;

	while (current_node != NULL && count < index)
	{
		current_node = current_node->next;
		count++;
	}
	if (index == 0 && current_node != NULL)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else if (count == index && current_node != NULL)
	{
		next_node = current_node->next;
		previous_node = current_node->prev;
		previous_node->next = next_node;
		if (current_node->next != NULL)
			next_node->prev = previous_node;
	}
	else
		return (-1);
	free(current_node);
	return (1);

}
