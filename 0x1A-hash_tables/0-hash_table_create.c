#include "hash_tables.h"

/**
 * hash_table_create - initiales a hash table
 * @size: size of the array
 * Return: Pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	if (size == 0)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (!h)
		return (NULL);

	h->size = size;
	h->array = calloc((size_t)h->size, sizeof(hash_node_t *));
	if (h->array == NULL)
		return (NULL);

	return (h);
}
