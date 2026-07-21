#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to created array.
 */
int *array_range(int min, int max)
{
	int i;
	int *ar;

	i = 0;
	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	ar[0] = min;
	i = 1;
	while (i < max - min + 1)
	{
		ar[i] = min + i;
		i++;
	}
	return (ar);
}

