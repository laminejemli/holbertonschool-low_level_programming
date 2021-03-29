#include "holberton.h"

/**
 * flip_bits - counts the number of bits
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, l = 0;
	unsigned long int c;
	unsigned long int ex = 0;

    ex = n ^ m; 

	for (i = 63; i >= 0; i--)
	{
		c = ex >> i;
		if (c & 1)
			l++;
	}

	return (l);
    }
