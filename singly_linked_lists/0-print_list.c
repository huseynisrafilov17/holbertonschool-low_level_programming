#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s", h->str);
		printf("[%d] %s", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
