#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key of the index
 * @size: size of the array
 *
 * Return: the index of the key pair
 * should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h;

	if (size == 0)
		return (0);

	h = hash_djb2(key);

	return (h % size);
}
