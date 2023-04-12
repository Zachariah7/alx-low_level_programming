#include "main.h"
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: double pointer array
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int n = 0;
	int m = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			m++;
	}

	m += ac;
/*
* number of \n
*/

	s = malloc(m * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		s[n] = av[i][j];
		n++;
	}
	if (s[n] == '\0')
	{
		s[n++] = '\n';
	}
	}
	return (s);
}
