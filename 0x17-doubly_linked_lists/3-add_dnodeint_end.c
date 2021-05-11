#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: double pointer
 * @n: data to insert
 * Return: the address, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *F;
	dlistint_t *aux = *head;

	if (!head)
		return (NULL);

	F = malloc(sizeof(dlistint_t));
	if (!F)
		return (NULL);

	F->n = n;
	F->next = NULL;

	if (*head == NULL)
	{
		F->prev = NULL;
		*head = F;
		return (F);
	}

	while (aux->next)
		aux = aux->next;

	aux->next = F;
	F->prev = aux;

	return (F);
}
