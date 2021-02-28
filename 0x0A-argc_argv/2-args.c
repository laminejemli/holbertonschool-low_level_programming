#include "holberton.h"

/**
* main - print number of arguments.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
int i, j = 0;
char *str = "";

for (i = 0; i < argc; i++)
{
str = argv[i];
while (str[j] != '\0')
{
_putchar (str[j]);
j++;
}
_putchar('\n');
															j = 0;
}
return (0);
}
