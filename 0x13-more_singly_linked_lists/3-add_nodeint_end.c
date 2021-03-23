#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds node at the end
 * @head: pointer of listin
 * @n: element to add to node
 * Return: pointer, or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *aux;
listint_t *tmp = *head;

aux = malloc(sizeof(listint_t));

if (!aux)
return (NULL);

aux->n = n;
aux->next = NULL;

if (*head == NULL)
{
*head = aux;
return (aux);
}

while (tmp->next)
tmp = tmp->next;

tmp->next = aux;

return (aux);
}
