#include "holberton.h"

/**
* set_bit - sets a bit to 1
* @n: pointer to number
* @index: index of the bit
*
* Return: 1 for success, -1 if fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int l = 1;
unsigned long int sum = 0;

if (index > 63)
	return (-1);
sum = l << index;
*n = sum | *n;
return (1);
}
