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
	int i = 0, size;
	hash_node_t **array, *current_node;

	if (ht == NULL)
		return;
	array = ht->array;
	size = ht->size;
	printf("{");
	while (i < size)
	{
		current_node = array[i];
		while (!(current_node))
		{
			printf("'%s': '%s'", current_node->key, current_node->value);
			if (!(i == size - 1 && current_node->next == NULL))
				printf(", ");
			current_node = current_node->next;
		}
	}
	printf("}");
}
