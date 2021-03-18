#include "lists.h"
#include <stdlib.h>

/**
* list_len - return the number of elements
* @h: pointer to the list_t list
* Return: number of the elements
*/
size_t list_len(const list_t *h)
{
size_t z = 0;

for (z = 0; h != 0; z++)
{
h = h->next;
}
return (z);
}

