#include "lists.h"
#include <stdlib.h>
#include <string.h>
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (*head != NULL && temp->next != NULL)
		temp = temp->next;
	new->str = strdup(str);
	new->len = strlen(str);
	if (head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp->next = new;
		new->next = NULL;
	}
	return(new);
}
