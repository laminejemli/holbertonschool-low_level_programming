#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array && cmp)
	{
		for (c = 0; c < size; i++)
		{
			if (cmp(array[c]) != 0)
				return (c);
		}
	}

	return (-1);
}
