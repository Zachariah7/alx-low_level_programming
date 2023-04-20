#include "3-calc.h"

/**
 * op_add - addition function
 * @a: arg 2
 * @b: arg 1
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction function...
 * @a: arg 2
 * @b: arg 1
 *
 * Return: the diferrence
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: arg 1
 * @b: arg 2
 *
 *  Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: arg 1
 * @b: arg 2
 *
 *  Return: the result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: arg 1
 * @b: arg 2
 *
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
