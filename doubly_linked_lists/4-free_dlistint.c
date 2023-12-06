#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees list.
 * @head: head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = temp;
		temp = head->next;
		free(head);
	}
}
