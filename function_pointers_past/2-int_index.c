#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches for an integer.
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: A pointer to the function that compares the values.
 * Return: Returns the index of the first element for which the cmp function
 *         does not return 0. If size <= 0 or no matches, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check is the array and cmp are valid */
	if (array != NULL && cmp != NULL)
	{
		/* Check if size is invalid */
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			/* Call the function pointed by cmp on each element */
			if (cmp(array[i]))
			{
				return (i); /* Return index if non-zero */
			}
		}
	}
	return (-1);
}
