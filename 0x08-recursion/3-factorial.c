#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: an input number
 *
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
