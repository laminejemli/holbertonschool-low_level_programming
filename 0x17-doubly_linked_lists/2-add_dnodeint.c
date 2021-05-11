#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begin
 * @head: double pointer
 * @n: data to insert
 * Return: the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *F;

	if (!head)
		return (NULL);

	F = malloc(sizeof(dlistint_t));
	if (!n)
		return (NULL);

	F->n = n;

	F->next = *head;
	F->prev = NULL;

	if (*head)
		(*head)->prev = F;

	*head = F;

	return (F);
}
