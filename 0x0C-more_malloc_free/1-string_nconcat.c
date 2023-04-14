#include "main.h"
/**
 * _strlen - calculate string length
 * @s: a string
 * Return: The string length
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2;
 * @s1: string 1
 * @s2: string 2
 * @n: The n bytes to concat from s2
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int nbr, leng, i, j;

	nbr = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nbr < 0)
		return (NULL);
	if (nbr >= _strlen(s2))
		nbr = _strlen(s2);

	leng = _strlen(s1) + nbr + 1;

	p = malloc(sizeof(char) * leng);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < nbr; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
