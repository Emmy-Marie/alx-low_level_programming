#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 *              array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: return NULL if fail or return a pointer to the array if successful
 */

int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array of pointers to width */
	array = malloc(width * sizeof(int *));

	/* Check if memory allocation was successful */
	if (array == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for each row */
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));

		/* Check if memory allocation was successful */
		if (array[i] == NULL)
		{
			/* Free the previously allocated rows */
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
