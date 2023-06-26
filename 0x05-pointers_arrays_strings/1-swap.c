#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: First integer pointer variable
 * @b: Second integer pointer variable
 */

void swap_int(int *a, int *b)
{
	int tank = *a;

	*a = *b;
	*b = tank;
}
