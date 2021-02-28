#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - change coins.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
int tab[5] = {25, 10, 5, 2, 1};
int counter = 0, i = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int rest = atoi(argv[1]);
if (rest < 0)
printf("0\n");
else
{
while (rest > 0)
{
if (rest >= tab[i])
{rest -= tab[i];
counter++;
}
else
i++;
}
printf("%d\n", counter);
															}
return (0);
}
}
