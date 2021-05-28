#include "hash_tables.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the hash
 */
void print_list(hash_node_t *h)
{
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h->next)
			printf(", ");
		h = h->next;
	}
}

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *nde = NULL;
	char *lastey = NULL;
	unsigned long int idx;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
			nde = ht->array[j];
	}

	printf("{");

	if (nde)
	{
		lastey = nde->key;
		idx = key_index((const unsigned char *)lastey, ht->size);
		for (j = 0; j < ht->size; j++)
		{
			print_list(ht->array[j]);
			if (ht->array[j] && j < idx)
				printf(", ");
		}
	}

	printf("}\n");
}
