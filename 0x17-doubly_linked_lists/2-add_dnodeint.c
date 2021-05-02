#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: double pointer
 * @n: data to insert
 * Return: the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	if (!head)
		return (NULL);

	nw = malloc(sizeof(dlistint_t));
	if (!n)
		return (NULL);

	new->n = nw;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = nw;

	*head = nw;

	return (nw);
}
