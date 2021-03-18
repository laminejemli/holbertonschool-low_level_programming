#include <stdio.h>
#include "lists.h"

/**
* print_list - displays the node of the linked list
* @h: pointer
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
size_t z = 0;
for (z = 0; h != 0; z++)
{
if (!h->str)
printf("[0](nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (z);
}
