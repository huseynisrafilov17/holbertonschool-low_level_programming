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
	int index, check_true = 1;
	hash_node_t **array, *new_node, *current_node;

	if (ht == NULL)
		return (0);
	array = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	if (!(array[index]))
	{
		new_node->next = NULL;
		array[index] = new_node;
	}
	else
	{
		current_node = array[index];
		while (current_node->next != NULL)
		{
			if (current_node->key == (char *)key)
			{
				current_node->value = (char *)value;
				check_true = 0;
				break;
			}
			current_node = current_node->next;
		}
		if (check_true)
		{
			current_node = array[index];
			new_node->next = current_node;
			array[index] = new_node;
		}
	}
	return (1);
}
