#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: pointer to a 2D array
 * @size: the square size
 * Return: On Success 0
 */
void print_diagsums(int *a, int size)
{

	int i = 0;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
		
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
