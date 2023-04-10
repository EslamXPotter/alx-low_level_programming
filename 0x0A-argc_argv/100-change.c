#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int n, x, answer;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	answer = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && n >= 0; x++)
	{
		while (n >= coins[x])
		{
			answer++;
			n -= coins[x];
		}
	}
	printf("%d\n", answer);
	return (0);
}
