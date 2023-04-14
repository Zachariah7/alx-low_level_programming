#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: nbr of arguments
 * @argv: the arguments
 * Return: 0 on success and 98 on failure
 */

int main(int argc, char *argv[])
{

unsigned int mul;
int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	mul = atoi(argv[1]) *  atoi(argv[2]);
	printf("%d\n", mul);

return (0);
}