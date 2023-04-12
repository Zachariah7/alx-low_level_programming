#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1 to concat
 * @s2: string 2 to concat
 *
 * Return: pointer to the concat of s1 and s2, On failure-> NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0'; j++)
	;

	n = malloc((i + j) * sizeof(char) + 1);

	if (n == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
	{
		n[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		n[i] = s2[j];
		i++;
	}
	n[i] = '\0';

	return (n);
}
