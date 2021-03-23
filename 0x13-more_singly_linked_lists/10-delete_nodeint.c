#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at certain index
 * @head: pointer
 * @index: index of the node
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *c = NULL;
	unsigned int l = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (l < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		l++;
	}


	c = tmp->next;
	tmp->next = c->next;
	free(c);

	return (1);
}
