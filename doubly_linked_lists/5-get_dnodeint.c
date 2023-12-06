#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - gets node at the given index.
 * @head: first node of list.
 * @index: given index.
 * Return: pointer to the node at the given index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;
	while (count <= index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
