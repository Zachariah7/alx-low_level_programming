#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *
 *Return: pointer to the newly created array.
 *NULL if malloc fails.
 *NULL if min > max.
 */

int *array_range(int min, int max)
{
	int i, inter;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	inter = ((max - min) + 1);

	p = malloc(inter * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < inter; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
