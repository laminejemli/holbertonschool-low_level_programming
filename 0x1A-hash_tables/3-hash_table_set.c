#include "hash_tables.h"

/**
 * replace_value - replaces the value at a key
 * @ht: double pointer to the hash node
 * @key: new key to add
 * @value: value to add
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *tmp = *ht;

	while (tmp && strcmp(tmp->key, key))
		tmp = tmp->next;

	free(tmp->value);
	tmp->value = strdup(value);
}

/**
 * check_key - checks if a key exists
 * @ht: pointer to the hash
 * @key: key to look
 *
 * Return: 1 if found, 0 if not
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(t->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to the hash
 * @key: new key to add
 * @value: value to add
 *
 * Return: the address of new element, or NULL if fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *n;

	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (NULL);

	n->key = strdup(key);
	n->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = n;
		n->next = NULL;
	} else
	{
		n->next = (*head);
		(*head) = n;
	}

	return (*head);
}

/**
 * hash_table_set - adds an element to the hash
 * @ht: hash table to add the element
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[idx], key))
	{
		replace_value(&ht->array[idx], key, value);
		return (1);
	}
	add_node(&ht->array[idx], key, value);
	if (&ht->array[idx] == NULL)
		return (0);
	return (1);
}
