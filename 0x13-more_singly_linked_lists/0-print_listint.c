#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a
linked list
* @h: pointer of linstint
* Return: number of linked lists
*/

size_t print_listint(const listint_t *h)
{
    size_t aux = 0;

    while(h)
    {
        printf("%d\n", h->n);
        aux++;
        h = h->next;
        }
        return (aux);
}
