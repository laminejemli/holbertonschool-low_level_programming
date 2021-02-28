#include "holberton.h"

/**
* main - print program name.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 0;
char *str = argv[argc - 1];

while (str[i] != '\0')
{
_putchar (str[i]);
i++;
}
_putchar ('\n');
return (0);
}
