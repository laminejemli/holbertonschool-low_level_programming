#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer of listin
 * Return: head to null
 */

void free_listint2(listint_t **head)
{
listint_t *aux;
if (head == NULL)
return;

while (*head)
{
aux = (*head)->next;
free(*head);
*head = aux;
}
}
