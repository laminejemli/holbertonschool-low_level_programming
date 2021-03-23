#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head of node
 * @head: pointer to node
 * Return: the element of inside
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int pol;

if (!head || !*head)
return (0);

pol = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;

return (pol);
}
