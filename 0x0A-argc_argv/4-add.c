#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - add  numbers.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
int i, add = 0;
char *endptr;

if (argc == 1)
printf("0\n");
else
{
for (i = 1; argv[i] != NULL; i++)
{
															add += strtol(argv[i], &endptr, 10);
if (*endptr != '\0')
}
printf("Error\n");
return (1);
}
}

printf("%d\n", add);
}
return (0);
}
