#include <stdlib.o>
#include "holberton.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @heigth: heigth of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
*/
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);

		s = malloc(sizeof(int *) * height);

		if (s == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			s[i] = malloc(sizeof(int) * width);
			if (s[i] == NULL)
			{
				free(s);
				for (j = 0, j <= i; j++)
					free(s[j];
							return (NULL);
							}
							}
							for ( i = 0; i < height; i++)
							{
							for (j = 0; j < width; j++)
							s[i][j] = 0;
							}
							}
							return (s);
							}	
