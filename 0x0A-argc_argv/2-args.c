#include <stdio.h>

/**
 * main - prints all arguments received by the program
 * @argc: an integer that represents the number of the arguments
 * @argv: an array that represents the list of the arguments
 *
 * Return: On Success 0
 */

int main(int argc, char *argv[])

{

	int i = 0;

	while (argc)

	{

		printf("%s\n", argv[i]);
		i++;
		argc--;
	}

	return (0);

}
