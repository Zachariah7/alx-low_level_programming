#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers, and prints the result followed by a new line
 * @argc: an integer that represents the number of the arguments
 * @argv: an array that represents the list of the arguments
 *
 * Return: On Success 0, On failure 1
 */

int main(int argc, char *argv[])

{

	int i = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)

			if(*c < '0' || *c > '9')
			{
			printf("Error\n");
			return (1);
			}

		i += atoi(argv[argc]);
	}

	printf("%d\n", i);

	return (0);

}
