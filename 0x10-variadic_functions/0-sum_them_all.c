#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum
 * @n: number of arguments
 * Return: the result sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;

	va_list list;

	va_start(list, s);

	for (i = 0; i < n; i++)
		s += va_arg(list, int);
	va_end(list);
	return (s);
}
