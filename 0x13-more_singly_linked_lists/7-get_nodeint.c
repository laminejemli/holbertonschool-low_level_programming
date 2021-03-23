#include "lists.h"

/**
 * get_nodeint_at_index - Returns index of node
 * * @head: first node
 * @index: index of the node
 * Return: pointer, NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp = head;

while (tmp == NULL && i < index)
{
tmp = tmp->next;
i++;
}
return (NULL);
}
