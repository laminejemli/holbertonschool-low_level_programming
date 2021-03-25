#include "holberton.h"
#include <string.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int base = 0;
    int i;

    if (!b)
    return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
		if (b[i] < '0' || b[i] > '1')
			return (0);
		base = 2 * base + (b[i] - '0');
	}

	return (base);
}
