[2;2R[2;2Rholberton.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
int c;

if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
