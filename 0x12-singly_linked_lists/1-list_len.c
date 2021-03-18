#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
