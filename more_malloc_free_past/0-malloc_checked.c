#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: Integer size in bytes
 * Return: returns a pointer to the allocated memory or 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	/* Declare a void pointer */
	void *ptr;

	/* Allocate memory of size b*/
	ptr = malloc(b);

	/* Check for allocation fail and terminate with exit code 98 */
	if (ptr == NULL)
	{
		exit(98);
	}

	/* Return pointer to beginning of allocated memory */
	return (ptr);
}
