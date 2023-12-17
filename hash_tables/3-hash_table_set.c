#include <stdlib.h>
#include <string.h>
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
	int index;
	hash_node_t **array, *new_node, *current_node;

	if (ht == NULL)
		return (0);
	array = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	current_node = array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, (char *)key) == 0)
		{
			strcpy(current_node->value, (char *)value);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	strcpy(new_node->key, (char *)key);
	strcpy(new_node->value, (char *)value);
	if (!(array[index]))
	{
		new_node->next = NULL;
		array[index] = new_node;
	}
	else
	{
		current_node = array[index];
		new_node->next = current_node;
		array[index] = new_node;
	}
	return (1);
}
