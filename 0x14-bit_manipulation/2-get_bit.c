#include "holberton.h"

/**
 * get_bit - returns a decimal number
 * @n: number to look for
 * @index: index
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;

if (index > 63)
return (-1);

i = (n >> index);
i = i & 1;

return (i);
}