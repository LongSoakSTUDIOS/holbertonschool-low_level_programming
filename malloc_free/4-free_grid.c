#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory pointed to by grid
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: always nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while ( i < height)
	{
		free(grid[i]);
		i++;
	}
	free (grid);
	return (0);
}

