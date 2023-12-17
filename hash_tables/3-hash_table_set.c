int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i = 0, index, size = ht->size;
	hash_node_t **array = ht->array, *new_node;

	index = key_index(key, size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL
	if (!(array[index]))
		array[index] = new_node;
	else
	{
	}
}
