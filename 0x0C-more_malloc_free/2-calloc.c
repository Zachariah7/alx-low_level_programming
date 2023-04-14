#include "main.h"

/**
 * _calloc - allocates memory of an array using malloc.
 * @nmemb: nbr of elements in an array.
 * @size: size of the elements.
 *
 * Return: NULL if size and / or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory allocated if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	s = (char *)p;

	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}

	return (s);
}
