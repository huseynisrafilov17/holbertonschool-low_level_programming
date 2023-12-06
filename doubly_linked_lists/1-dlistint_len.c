#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - counts elements of doubly linked list.
 * @h: doubly linked list.
 * Return: count of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
