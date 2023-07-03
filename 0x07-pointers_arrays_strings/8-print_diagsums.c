#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints sum of the diagonals of square matrix
 * @a: an integer pointer
 * @size: integer variable
 */

void print_diagsums(int *a, int size)
{
	int i, sum_1, sum_2;

	i = 0;
	sum_1 = 0;
	sum_2 = 0;
	while (i < size)
	{
		sum_1 += a[i * size + i]; /* calculate the main diagonal sum */
		sum_2 += a[i * size + (size - 1 - i)]; /* secondary diag sum */
		i++;
	}

	printf("%d, ", sum_1);
	printf("%d\n", sum_2);
}
