#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenates from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the result string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j, l1, l2;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		x = malloc(sizeof(char) * (l1 + n + 1));
	if (!x)
		return (NULL);
	while (i < l1)
	{
		x[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		x[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		x[i++] = s2[j++];
	x[i] = '\0';
	return (x);
}
