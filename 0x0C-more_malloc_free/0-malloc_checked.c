#include <stdlib.h>
#include "holberton.h"

/**
* *malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(b));
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}

