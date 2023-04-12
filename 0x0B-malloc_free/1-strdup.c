#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: NULL On failure, a pointer to the duplicated string.
 */

char *_strdup(char *str)
{

	int i;
	int m;
	char *n;

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m] != '\0'; m++)
	;

	n = malloc(m * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < m; i++)
			n[i] = str[i];
	}
	return (n);
}
