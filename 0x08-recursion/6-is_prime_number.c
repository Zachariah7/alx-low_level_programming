#include "main.h"

/**
 * is_prime_number - a recursive
 * @n: An integer
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (snd_interfunction(n, n - 1));
	}
}

/**
 * snd_interfunction - a function that returns 1 if the input
 * integer is a prime number.
 * @n: An integer
 * @i: An integer
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int snd_interfunction(int n, int i)
{
	if ((n % i) == 0)
		return (0);
	else if ((n % i) == 1)
		return (1);

	else
	return (snd_interfunction(n, i - 1));

}
