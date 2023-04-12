#include "main.h"

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character to input
 * Return: a pointer to the array, On failure: NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(sizeof(char) * size);

	if (size == 0 || i == NULL)
	{
		return (0);
	}
	while (size--)

		i[size] = c;

	return (i);
}
