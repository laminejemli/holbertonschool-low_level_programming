#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in a linked list
 * @h: double pointer
 * @idx: index of the node
 * @n: data
 * Return: address, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int l;
	dlistint_t *f;
	dlistint_t *aux = *h;

	f = malloc(sizeof(dlistint_t));
	if (!f || !h)
		return (NULL);

	f->n = n;
	f->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (l = 0; aux && l < idx; l++)
	{
		if (l == idx - 1)
		{
			if (aux->next == NULL)
				return (add_dnodeint_end(h, n));
			f->next = aux->next;
			f->prev = aux;
			aux->next->prev = f;
			aux->next = f;
			return (f);
		}
		else
			aux = aux->next;
	}

	return (NULL);
}
