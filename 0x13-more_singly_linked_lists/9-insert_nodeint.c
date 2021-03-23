#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert new node in index
 * @head: pointer to first node
 * @idx: index of the new node
 * @n: element to insert on the new node
 * Return: pointer to node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int l;
listint_t *aux;
listint_t *tmp = *head;

aux = malloc(sizeof(listint_t));

if (!aux || !head)
return (NULL);

aux->n = n;
aux->next = NULL;

if (idx == 0)
{
aux->next = *head;
*head = aux;
return (aux);
}
for (l = 0; tmp && l < idx; l++)
{
if (l == idx - 1)
{
aux->next = tmp->next;
tmp->next = aux;
return (aux);
}
else
tmp = tmp->next;
}
return (NULL);
}
