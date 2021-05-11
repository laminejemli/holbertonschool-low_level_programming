#include "lists.h"

/**
 * dlistint_len - returns the number of nodes
 * @h: pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}

/**
 * delete_dnodeint_at_index - deltes a node
 * @head: double pointer
 * @index: index of the node
 * Return: 1 on success, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int l = 0;

	if (*head == NULL || dlistint_len(aux) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		aux->next = NULL;
		free(aux);
		return (1);
	}

	while (l < index)
	{
		aux = aux->next;
		l++;
	}

	aux->prev->next = aux->next;
	if (aux->next)
		aux->next->prev = aux->prev;
	free(aux);

	return (1);
}
