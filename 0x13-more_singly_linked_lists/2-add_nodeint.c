#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - new node at the beginnin
 * @head: pointer of listin
 * @n: element to add to node
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *aux;

    aux = malloc(sizeof(listint_t));

    if(!aux)
    return (NULL);

    aux->n = n;
    aux->next = *head;
    *head = aux;

    return (aux);
    }
