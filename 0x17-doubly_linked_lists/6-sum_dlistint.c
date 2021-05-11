#include "lists.h"
/**
 * sum_dlistint - returns the sum of data
 * @head: pointer
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
