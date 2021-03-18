#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - create a new node at the end of list
 * @head: pointer to the first element of node
 * @str: string to be duplicated
 * Return: adress of the new node, NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *tmp = *head;
    unsigned int len = 0;

    while(str[len])
        len++;

        new = mallo(sizeof(list_t));

        if (!new)
        return (NULL);

        new->str = strdup(str);
        new->len = len;
        new->next = NULL;

        if (*head)
        {
            *head = new;
            return (new);
            }
            while (tmp->next)
            tmp = tmp->next;

            tmp->next = new;
            return (new);
            }