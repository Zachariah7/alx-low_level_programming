#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers, and prints the result followed by a new line
 * @argc: an integer that represents the number of the arguments
 * @argv: an array that represents the list of the arguments
 *
 * Return: On Success 0, On failure 1
 */

int main(int argc, char *argv[])

{
	int i = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
