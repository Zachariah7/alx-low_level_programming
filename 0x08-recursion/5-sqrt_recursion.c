#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: An integre input
 *
 * Return: the root square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (interfunction(n, 2));
	}
}
/**
 * interfunction - _sqrt_recursion
 * @n: An integer input
 * @i: An integer input
 *
 * Return: the root square
 */

int interfunction(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (interfunction(n, i + 1));
	}
}
