#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: an integer that represents the number of the arguments
 * @argv: an array that represents the list of the arguments
 *
 * Return: On Success 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);

}
