#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - creates a new node
 * @head: double pointer
 * @str: string
 * Return: adress of element, NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while(str[l])
		l++;

	n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
