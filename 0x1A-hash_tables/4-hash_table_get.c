#include "hash_tables.h"

/**
 * hash_table_get - returns a value associated with a key
 * @ht: hash table
 * @key: key of the value to retrieve
 * Return: the value associated,
 * or NULL if fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[idx];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
