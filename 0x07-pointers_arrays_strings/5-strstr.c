#include "main.h"
/**
 * _strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
		{
		for (j = 0; needle[j] != '\0'; j++)
			{
			if (haystack[i] == needle[j])

			return (haystack);
			}

		}

	return ('\0');
}
