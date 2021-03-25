#include "holberton.h"
#include <string.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int base = 1;
    unsigned int i = 0;
    int a;
    unsigned int len;

    if (b == NULL)
    return (0);

len = strlen(b);

    for (a = len - 1; a >= 0; a--)
    {
        if (b[a] != '0' && b[a] != '1')
        return (0);

        if (b[a] == '1')
        {
            i += base;
            }
base *= 2;
}
return (i);
}
