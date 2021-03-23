#include "lists.h"
/**
 * listint_len - return the number of elements
 *  @h: pointer of linstint
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
    size_t tmp = 0;

    while (h)
    {
        tmp++;
        h = h->next;
        }
        return (tmp);
        }