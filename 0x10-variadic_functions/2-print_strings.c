#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	char *s;

	va_list list;

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		s = va_arg(list, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && c == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	printf("\n");

	va_end(list);
}
