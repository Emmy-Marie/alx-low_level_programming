#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars and initializes it
 *                with a specific char.
 * @size: Size of array of chars.
 * @c: Specific char to be initialized
 * Return: Null if size=0 or it fails. Return pointer to the array if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	/* Allocate memory for the array */
	array = malloc(sizeof(char) * size);

	/* Check if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}

	/* Check if memory allocation fails */
	if (array == 0)
	{
		return (NULL);
	}

	/* Initialize array elements with the specific char */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
