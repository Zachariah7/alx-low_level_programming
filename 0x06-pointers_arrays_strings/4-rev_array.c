#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int i = 0;

	int t = 0;

	n = n - 1;

	while (i < n - 1)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
		n--;
	}
}
