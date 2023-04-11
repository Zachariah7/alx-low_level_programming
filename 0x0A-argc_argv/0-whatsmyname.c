#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: an integer that represents the number of the arguments
 * @argv: an array that represents the list of the arguments
 *
 * Return: On Success 0
 */

int main(int argc, char **argv)

{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
