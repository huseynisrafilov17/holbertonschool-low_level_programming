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

	if (index == 0)
	{
		current_node = current_node->next;
		current_node->prev = NULL;
		free(*head);
		return (1);
	}
	while (current_node != NULL && count < index)
	{
		current_node = current_node->next;
		count++;
	}
	if (count == index && current_node != NULL && current_node->next == NULL)
	{
		previous_node = current_node->prev;
		previous_node->next = NULL;
		free(current_node);
	}
	else if (count == index && current_node != NULL)
	{
		previous_node = current_node->prev;
		next_node = current_node->next;
		previous_node->next = next_node;
		next_node->prev = previous_node;
		free(cuurent_node);
	}
	else
		return (-1);
	return (1)

}
