#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialze the array c
 * Return; pointer to the array (success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return(NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (0);
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
