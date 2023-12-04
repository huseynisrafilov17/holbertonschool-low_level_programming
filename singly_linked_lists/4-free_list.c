#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = temp;
		temp = head->next
		free(head->str);
		free(head);
	}
}
