#include "main.h"
/*
*@print_last_digit : prints the last digit of a number n
*@n : the number to work on
*Return: the value of the last digit
*/

int print_last_digit(int n)
{
int k;

k = n % 10;

if (n < 0)
	k = -k;

_putchar(k + 48);
return (k);
}
