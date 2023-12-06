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
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
