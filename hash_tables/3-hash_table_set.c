#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_set - sets hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value.
 * Return: 0 or 1 based on success.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index, size;
	hash_node_t **array, *new_node, *current_node, *check_node;

	if (ht == NULL)
		return (0);
	size = ht->size;
	array = ht->array
	index = key_index((unsigned char *)key, size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	if (!(array[index]))
		new_node->next = NULL;
	else
	{
		check_node = array[index];
		while (check_node->next != NULL)
		{
			if (check_node->key == (char *)key)
				check_node->value = (char *)value;
			check_node = check_node->next;
		}
		current_node = array[index];
		new_node->next = current_node;
		array[index] = new_node;
	}
	array[index] = new_node;
	return (1);
}
