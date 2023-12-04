#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements inside a linked list.
 * @h: list.
 * Return: node count.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
