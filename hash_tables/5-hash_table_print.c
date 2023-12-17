#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints elements of hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, size, printed = 0;
	hash_table_t *h_t = (hash_table_t *)ht;
	hash_node_t **array, *current_node;

	if (h_t == NULL)
		return;
	array = h_t->array;
	size = h_t->size;
	printf("{");
	while (i < size)
	{
		current_node = array[i];
		while (current_node != NULL)
		{
			printed = 1
			printf("'%s': '%s'", current_node->key, current_node->value);
			if (current_node->next != NULL)
				printf(", ");
			current_node = current_node->next;
		}
		if (printed == 1 && i + 1 != size && array[i + 1] != NULL)
			printf(", ");
		i++;
	}
	printf("}\n");
}
