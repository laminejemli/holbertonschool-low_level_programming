#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - copies the string given
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, l;

	i = 0;
	l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);
	while ((s[i] = str[i]) != '\0')
		i++;
	return (s);

}
