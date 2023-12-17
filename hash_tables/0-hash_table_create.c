#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates hash table.
 * @size: size of hash table.
 * Return: pointer to hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_table = malloc(sizeof(hash_table_t));
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * hash_table->size);
	return (hash_table);
}
