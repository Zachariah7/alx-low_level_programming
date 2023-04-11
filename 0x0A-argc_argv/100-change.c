#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: an integer that represents the number of the arguments
 * @argv: an array that represents the list of the arguments
 *
 * Return: On Success 0, On failure 1
 */

int main(int argc, char *argv[])
{
	int i;
	int mincoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{

		int amount = atoi(argv[1]);

			for (i = 0; i < 5; i++)
			{
				if (amount >= coins[i])
				{
					mincoins += amount / coins[i];
					amount = amount % coins[i];

					if (amount % coins[i] == 0)
					{
						break;
					}

				}
			}
				printf("%d\n", mincoins);

			return (0);
		}

}
