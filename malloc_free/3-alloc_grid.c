#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dim array of ints
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2 dim array of ints
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **matrix;

	i = 0;
	j = 0;
	if (width <= 0 || height <= 0)
		return NULL;
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return NULL;
	while(i < height )
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			return NULL;
			free(matrix);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}

