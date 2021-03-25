#include "holberton.h"

/**
 * print_binary - print number in binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
unsigned int c;
int i, p = 0;

for (i = 63; i >= 0; i--)
{
c = n >> i;

if (c & 1)
{
_putchar('1');
p++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
