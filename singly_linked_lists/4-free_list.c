#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list.
 * @head: head of the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
}
