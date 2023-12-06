#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints elements of doubly linked list.
 * @h: doubly linked list.
 * Return: count of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
