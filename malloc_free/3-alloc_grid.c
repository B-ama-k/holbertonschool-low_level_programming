#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2 dimensional array of integers.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the newly allocated 2D array,
 *         or NULL on failure or if width/height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **mat, i = 0, j = 0;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	mat = malloc(height * sizeof(int *));
		if (mat == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (j = 0; j <  i; j++)
				free(mat[j]);
			free(mat);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mat[i][j] = 0;
	}

	return (mat);
}
