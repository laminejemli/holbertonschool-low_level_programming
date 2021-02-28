#include "holberton.h"

/**
* main - print number of arguments.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
_putchar((argc - 1) + '0');
_putchar('\n');

return (0);
}
