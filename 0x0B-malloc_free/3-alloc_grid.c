#include "main.h"

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: length of the 1st dimension
 * @height: length of the 2nd dimension
 *
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **n, i, j;

	n = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0 || n == 0)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(int));

		if (n[i] == NULL)
		{
			while (i--)
				free(n[i]);
			free(n);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			n[i][j] = 0;
	}

	return (n);
	}
}
