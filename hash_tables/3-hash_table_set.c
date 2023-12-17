#include <stdlib.h>
#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index, size = ht->size;
	hash_node_t **array = ht->array, *new_node, *current_node;

	index = key_index((unsigned char *)key, size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	if (!(array[index]))
		array[index] = new_node;
	else
	{
		current_node = array[index];
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (1);
}
