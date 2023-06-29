#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: pointer to an integer
 * @n: integer number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
		i++;
	}
}
