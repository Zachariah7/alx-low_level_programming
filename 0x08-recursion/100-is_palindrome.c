#include "main.h"

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	;

	return (pal(s, i));
}

/**
 * pal - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */

int pal(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pal(s + 1, l - 1));
	}
	return (0);
}
