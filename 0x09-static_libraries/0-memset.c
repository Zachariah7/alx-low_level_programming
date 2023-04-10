#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @n: nbr of bytes to change
 * @s: address of memory to fill
 * @b: the value to change with
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
