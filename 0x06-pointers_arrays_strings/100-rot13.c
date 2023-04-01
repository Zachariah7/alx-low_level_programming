#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	char *p = s;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ALPHA[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if ( *s == alpha[i])
			{
				*s = ALPHA[i];
				break;
			}
		}
	s++;
	}
	return (p);
}
