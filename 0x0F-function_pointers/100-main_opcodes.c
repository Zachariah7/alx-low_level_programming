function_pointers.h
/**
 * print_opc - prints the opcodes of the program.
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */

void print_opc(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments of the function
 * @argv: array of pointers to arguments
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opc((char *)&main, n);

	return (0);
}
