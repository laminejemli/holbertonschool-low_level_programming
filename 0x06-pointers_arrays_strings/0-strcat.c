#include "holberton.h"

/**
* _strcat - concatenates two strings
* @dest: string to append to
* @src: string to add
* Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int l, m;

l = 0;
m = 0;

while (dest[l] != '\0')
l++;

while (src[m] != '\0')
{
dest[l] = src[m];
m++;
i++;
															}
dest[l] = '\0';
return (dest);
}
