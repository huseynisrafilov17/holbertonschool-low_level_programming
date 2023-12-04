#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node to the linked list.
 * @head: head of linked list.
 * @str: string.
 * Return: pointer to new node of the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
