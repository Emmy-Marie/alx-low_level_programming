#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 * @grid: A 2 dimensional grid
 * @height: Height of the grid
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return; /* No grid to free */
	}

	/* Free memory for each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free memory for the array of pointers to rows */
	free(grid);
}
