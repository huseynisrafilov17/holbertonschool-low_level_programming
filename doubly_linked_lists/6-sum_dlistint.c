#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - finds sum of all elements of list.
 * @head: first node of list.
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
