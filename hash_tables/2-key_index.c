#include "hash_tables.h"
/**
 * key_index - helps to find index for a key.
 * @size: size of hash table.
 * @key: key.
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2((unsigned char *)key);
	index = hash % size;
	return (index);
}
