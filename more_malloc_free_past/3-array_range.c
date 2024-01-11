#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: Return pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	/* Check if min is greater than max */
	if (min > max)
	{
		return (NULL);
	}

	/* Calculate the size of the array */
	size = (max - min) + 1;

	/* Allocate memory for the array block */
	ptr = malloc(sizeof(int) * size);

	/* Check for allocation fail. Else, if success, create array */
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (min <= max)
		{
			ptr[i] = min++;
			i++;
		}
	}

	return (ptr);
}
