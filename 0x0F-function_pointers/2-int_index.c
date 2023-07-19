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

	/* Check if the size is invalid */
	if (size <= 0)
	{
		return (-1);
	}

	/* Check is the array and size are valid */
	if (array && size)
	{
		i = 0;
		while (i < size)
		{
			/* Call the function pointed by cmp on each element */
			if ((*cmp)(array[i]) != 0)
			{
				return (i); /* Return index if non-zero */
			}
			i++;
		}
	}
	return (-1);
}
