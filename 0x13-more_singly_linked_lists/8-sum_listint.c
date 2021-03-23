#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node of the linked list
 *
 * Return: result of data
 */
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *tmp = head;

while (tmp)
{
s += tmp->n;
tmp = tmp->next;
}
return (s);
}
