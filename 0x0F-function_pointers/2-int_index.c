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
	int i;
	i = 0;


	if (array && cmp)

	while (i < size)
	{
			if (cmp(array[i]) != 0)
				return(i);
			i++;
	}
	return (-1);
}
