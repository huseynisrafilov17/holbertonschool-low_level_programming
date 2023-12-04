#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds node to the end of the list.
 * @head: head of the list/
 * @str: string.
 * Return: pointer of the added element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (*head != NULL && temp->next != NULL)
		temp = temp->next;
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp->next = new;
		new->next = NULL;
	}
	return (new);
}
