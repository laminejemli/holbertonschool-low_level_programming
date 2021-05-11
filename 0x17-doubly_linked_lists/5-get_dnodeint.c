#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node
 * @head: pointer
 * @index: index of the node
 * Return: address, NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int l = 0;

	if (!head)
		return (NULL);

	while (head && l < index)
	{
		head = head->next;
		l++;
	}

	return (head ? head : NULL);
}
