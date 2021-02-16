#include "holberton.h"
/**
* puts2 - print every other character
* flowed by a new line
* @str: the string to be printe
*/
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
