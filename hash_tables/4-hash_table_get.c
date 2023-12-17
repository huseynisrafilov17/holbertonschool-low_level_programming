#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - gets a value from hash table.
 * @ht: hash table.
 * @key: key.
 * Return: NULL or value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *val = NULL;
	int index;
	hash_node_t **array, *current_node;

	if (ht == NULL)
		return (NULL);
	array = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	current_node = array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, (char *)key) == 0)
		{
			val = strdup(current_node->value);
			break;
		}
		current_node = current_node->next;
	}
	return (val);
}
