#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 *                  on each element of an array.
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: Function pointer to array_iterator.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Declaring an unsigned int variable i to serve as a loop counter */
	unsigned int i;

	/* Checking to ensure that both array or action are not NULL */
	if (array == NULL || action == NULL)
	{
		return;
	}

	/* The loop aids in applying the function to each element of an array */
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
