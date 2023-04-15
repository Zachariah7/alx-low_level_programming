#include "main.h"

/**
 * is_prime_number -  a function to asses if the input is a prime number
 * @n: integer input
 * Return: recursion
 */

int is_prime_number(int n)
{
	if (((n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 3));
	}
}


/**
 * is_prime - check if n is prime
 * @n: integer input
 * @m: integer input
 * Return: 0 on failure, 1 on success
 */

int is_prime(int n, int m)
{
	if (n == m)
	{
		return (1);
	}
	if (n % m == 0)
	{
		return (0);
	}
	else if (n > m)
	{
		return (divisors(n, m + 1));
	}

}
