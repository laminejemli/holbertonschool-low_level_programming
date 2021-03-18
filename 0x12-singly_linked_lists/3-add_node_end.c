#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string to add
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;

	n = malloc(sizeof(list_t));
	if (n != NULL)
	{
		n->str = strdup(str);
		n->len = _strlen(str);
		n->next = NULL;
	} else
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = n;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = n;

	return (n);
}
