#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0, size;
	hash_node_t **array, *current_node, *next_node;

	if (ht == NULL)
		return;
	array = ht->array;
	size = ht->size;
	while (i < size)
	{
		current_node = array[i];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
		i++;
	}
	free(array);
	free(ht);
}
