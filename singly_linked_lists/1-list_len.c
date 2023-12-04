#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints everything inside linked list.
 * @h: list.
 * Return: node count.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
